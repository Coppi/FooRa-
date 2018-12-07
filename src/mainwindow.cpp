#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "db/database.h"
#include "db/dbuser.h"
#include "match.h"


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


void MainWindow::on_actionAdd_Match_triggered()
{
    addMatchDialog = new QDialog;
    addMatchDialog->setModal(true);
    addMatchDialogForm.setupUi(addMatchDialog);
    addMatchDialog->show();

    connect (addMatchDialogForm.cancelButton, SIGNAL(clicked()),addMatchDialog,SLOT(close()));
    connect (addMatchDialogForm.addMatchButton, SIGNAL(clicked()),this,SLOT(addMatchButton_triggered()));

    QStringList users = DBUser::getUsers();

    addMatchDialogForm.comboBoxBlueDefense->addItems(users);
    addMatchDialogForm.comboBoxBlueOffense->addItems(users);
    addMatchDialogForm.comboBoxRedDefense->addItems(users);
    addMatchDialogForm.comboBoxRedOffense->addItems(users);

    QStringList scores = {"0", "1", "2", "3","4", "5","6", "7","8", "9", "10"};
    addMatchDialogForm.comboBoxBlueScore->addItems(scores);
    addMatchDialogForm.comboBoxRedScore->addItems(scores);

//    connect (addUserDialogForm.addUserClosePushButton, SIGNAL(clicked()),addUserDialog,SLOT(close()));
//    connect (addUserDialogForm.addUserPushButton, SIGNAL(clicked()),this,SLOT(addUserPushButton_triggered()));
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

    if (DBUser::doesUserExist(newUserNickName))
    {
        QMessageBox::warning(this, "Warning", "User with this nickname already exists!");
    }
    else
    {
        DBUser::addUser(newUserNickName, newUserFirstName, newUserLastName);
    }
}


void MainWindow::addMatchButton_triggered()
{
    QString redDefense = addMatchDialogForm.comboBoxRedDefense->currentText();
    QString redOffense = addMatchDialogForm.comboBoxRedOffense->currentText();
    QString blueDefense = addMatchDialogForm.comboBoxBlueDefense->currentText();
    QString blueOffense = addMatchDialogForm.comboBoxBlueOffense->currentText();
    unsigned redScore = addMatchDialogForm.comboBoxRedScore->currentIndex();
    unsigned blueScore = addMatchDialogForm.comboBoxBlueScore->currentIndex();

    if (redScore > Match::END_SCORE)
    {
        QMessageBox::warning(this, "Warning", "Red Score is bigger than maximum!");
        return;
    }

    if (blueScore > Match::END_SCORE)
    {
        QMessageBox::warning(this, "Warning", "Blue Score is bigger than maximum!");
        return;
    }

    if ((redScore != Match::END_SCORE) && (blueScore != Match::END_SCORE))
    {
        QMessageBox::warning(this, "Warning", "Once Score should be equal to end score!");
        return;
    }

    qint64 redDefenseId = 0;
    if (!DBUser::getID(redDefense, redDefenseId))
    {
        QMessageBox::warning(this, "Warning", "Red Defense does not exist!");
        return;
    }
    qint64 redOffenseId = 0;
    if (!DBUser::getID(redOffense, redOffenseId))
    {
        QMessageBox::warning(this, "Warning", "Red Offense does not exist!");
        return;
    }
    qint64 blueDefenseId = 0;
    if (!DBUser::getID(blueDefense, blueDefenseId))
    {
        QMessageBox::warning(this, "Warning", "Blue Defense does not exist!");
        return;
    }
    qint64 blueOffenseId = 0;
    if (!DBUser::getID(blueOffense, blueOffenseId))
    {
        QMessageBox::warning(this, "Warning", "Blue Offense does not exist!");
        return;
    }

    Database &db = Database::getInstance();

    db.addMatch(redDefenseId, redOffenseId, blueDefenseId, blueOffenseId, redScore, blueScore);
}

