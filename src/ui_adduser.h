/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddUserDialog
{
public:
    QLineEdit *AddUserLineEdit;
    QPushButton *addUserPushButton;
    QPushButton *addUserClosePushButton;

    void setupUi(QDialog *AddUserDialog)
    {
        if (AddUserDialog->objectName().isEmpty())
            AddUserDialog->setObjectName(QStringLiteral("AddUserDialog"));
        AddUserDialog->resize(400, 108);
        AddUserLineEdit = new QLineEdit(AddUserDialog);
        AddUserLineEdit->setObjectName(QStringLiteral("AddUserLineEdit"));
        AddUserLineEdit->setGeometry(QRect(10, 10, 231, 23));
        AddUserLineEdit->setMinimumSize(QSize(231, 0));
        AddUserLineEdit->setMaxLength(32);
        addUserPushButton = new QPushButton(AddUserDialog);
        addUserPushButton->setObjectName(QStringLiteral("addUserPushButton"));
        addUserPushButton->setGeometry(QRect(250, 10, 80, 23));
        addUserClosePushButton = new QPushButton(AddUserDialog);
        addUserClosePushButton->setObjectName(QStringLiteral("addUserClosePushButton"));
        addUserClosePushButton->setGeometry(QRect(250, 60, 80, 23));

        retranslateUi(AddUserDialog);

        QMetaObject::connectSlotsByName(AddUserDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUserDialog)
    {
        AddUserDialog->setWindowTitle(QApplication::translate("AddUserDialog", "Dialog", 0));
        addUserPushButton->setText(QApplication::translate("AddUserDialog", "Add User", 0));
        addUserClosePushButton->setText(QApplication::translate("AddUserDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class AddUserDialog: public Ui_AddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
