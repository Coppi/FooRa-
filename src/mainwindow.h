#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_adduser.h"
#include "ui_addmatch.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionAdd_User_triggered();
    void on_actionAdd_Match_triggered();

    void addUserPushButton_triggered();
    void addMatchButton_triggered();


private:
    Ui::MainWindow *ui;
    QDialog *addUserDialog;
    Ui::AddUserDialog addUserDialogForm;
    QDialog *addMatchDialog;
    Ui::AddMatchDialog addMatchDialogForm;
};

#endif // MAINWINDOW_H
