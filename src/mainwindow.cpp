#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "db/database.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Database::getInstance().open();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAdd_User_triggered()
{
    addUserDialog = new QDialog;
    addUserDialog->setModal(true);
    addUserDialogForm.setupUi(addUserDialog);
    addUserDialog->show();
    connect (addUserDialogForm.addUserClosePushButton, SIGNAL(clicked()),addUserDialog,SLOT(close()));
    connect (addUserDialogForm.addUserPushButton, SIGNAL(clicked()),this,SLOT(addUserPushButton_triggered()));
}

void MainWindow::addUserPushButton_triggered()
{
    QString newUserNickName = addUserDialogForm.addUserNickNameLineEdit->text();
    if (newUserNickName.size() < 3)
    {
        QMessageBox::warning(this, "Warning", "Please use at least 3 characters!");
    }
    if (newUserNickName.size() > 40)
    {
        QMessageBox::warning(this, "Warning", "Please use at most 40 characters!");
    }
    QString newUserFirstName = addUserDialogForm.addUserFirstNameLineEdit->text();
    if (newUserFirstName.size() < 3)
    {
        QMessageBox::warning(this, "Warning", "Please use at least 3 characters!");
    }
    if (newUserFirstName.size() > 40)
    {
        QMessageBox::warning(this, "Warning", "Please use at most 40 characters!");
    }
    QString newUserLastName = addUserDialogForm.addUserLastNameLineEdit->text();
    if (newUserLastName.size() < 3)
    {
        QMessageBox::warning(this, "Warning", "Please use at least 3 characters!");
    }
    if (newUserLastName.size() > 40)
    {
        QMessageBox::warning(this, "Warning", "Please use at most 40 characters!");
    }
    Database &db = Database::getInstance();
    db.open();

    if (db.doesUserExist(newUserNickName))
    {
        QMessageBox::warning(this, "Warning", "User with this nickname already exists!");
    }
    else
    {
        db.addUser(newUserNickName, newUserFirstName, newUserLastName);
    }
}

