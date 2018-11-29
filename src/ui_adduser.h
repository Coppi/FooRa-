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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddUserDialog
{
public:
    QLineEdit *AddUserNickNameLineEdit;
    QPushButton *addUserPushButton;
    QPushButton *addUserClosePushButton;
    QLineEdit *AddUserFirstNameLineEdit;
    QLineEdit *AddUserLastNameLineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *AddUserDialog)
    {
        if (AddUserDialog->objectName().isEmpty())
            AddUserDialog->setObjectName(QStringLiteral("AddUserDialog"));
        AddUserDialog->resize(430, 99);
        AddUserNickNameLineEdit = new QLineEdit(AddUserDialog);
        AddUserNickNameLineEdit->setObjectName(QStringLiteral("AddUserNickNameLineEdit"));
        AddUserNickNameLineEdit->setGeometry(QRect(100, 10, 231, 23));
        AddUserNickNameLineEdit->setMinimumSize(QSize(231, 0));
        AddUserNickNameLineEdit->setMaxLength(32);
        addUserPushButton = new QPushButton(AddUserDialog);
        addUserPushButton->setObjectName(QStringLiteral("addUserPushButton"));
        addUserPushButton->setGeometry(QRect(340, 20, 80, 23));
        addUserClosePushButton = new QPushButton(AddUserDialog);
        addUserClosePushButton->setObjectName(QStringLiteral("addUserClosePushButton"));
        addUserClosePushButton->setGeometry(QRect(340, 50, 80, 23));
        AddUserFirstNameLineEdit = new QLineEdit(AddUserDialog);
        AddUserFirstNameLineEdit->setObjectName(QStringLiteral("AddUserFirstNameLineEdit"));
        AddUserFirstNameLineEdit->setGeometry(QRect(100, 40, 231, 23));
        AddUserFirstNameLineEdit->setMinimumSize(QSize(231, 0));
        AddUserFirstNameLineEdit->setMaxLength(32);
        AddUserLastNameLineEdit = new QLineEdit(AddUserDialog);
        AddUserLastNameLineEdit->setObjectName(QStringLiteral("AddUserLastNameLineEdit"));
        AddUserLastNameLineEdit->setGeometry(QRect(100, 70, 231, 23));
        AddUserLastNameLineEdit->setMinimumSize(QSize(231, 0));
        AddUserLastNameLineEdit->setMaxLength(32);
        label = new QLabel(AddUserDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 59, 15));
        label_2 = new QLabel(AddUserDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 71, 16));
        label_3 = new QLabel(AddUserDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 70, 71, 16));

        retranslateUi(AddUserDialog);

        QMetaObject::connectSlotsByName(AddUserDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUserDialog)
    {
        AddUserDialog->setWindowTitle(QApplication::translate("AddUserDialog", "Dialog", 0));
        addUserPushButton->setText(QApplication::translate("AddUserDialog", "Add User", 0));
        addUserClosePushButton->setText(QApplication::translate("AddUserDialog", "Close", 0));
        label->setText(QApplication::translate("AddUserDialog", "Nickname", 0));
        label_2->setText(QApplication::translate("AddUserDialog", "First name", 0));
        label_3->setText(QApplication::translate("AddUserDialog", "Last name", 0));
    } // retranslateUi

};

namespace Ui {
    class AddUserDialog: public Ui_AddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
