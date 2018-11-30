/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
    QLineEdit *addUserNickNameLineEdit;
    QPushButton *addUserPushButton;
    QPushButton *addUserClosePushButton;
    QLineEdit *addUserFirstNameLineEdit;
    QLineEdit *addUserLastNameLineEdit;
    QLabel *labelNickName;
    QLabel *labelFirstName;
    QLabel *labelLastName;

    void setupUi(QDialog *AddUserDialog)
    {
        if (AddUserDialog->objectName().isEmpty())
            AddUserDialog->setObjectName(QStringLiteral("AddUserDialog"));
        AddUserDialog->resize(430, 99);
        addUserNickNameLineEdit = new QLineEdit(AddUserDialog);
        addUserNickNameLineEdit->setObjectName(QStringLiteral("addUserNickNameLineEdit"));
        addUserNickNameLineEdit->setGeometry(QRect(100, 10, 231, 23));
        addUserNickNameLineEdit->setMinimumSize(QSize(231, 0));
        addUserNickNameLineEdit->setMaxLength(32);
        addUserPushButton = new QPushButton(AddUserDialog);
        addUserPushButton->setObjectName(QStringLiteral("addUserPushButton"));
        addUserPushButton->setGeometry(QRect(340, 20, 80, 23));
        addUserClosePushButton = new QPushButton(AddUserDialog);
        addUserClosePushButton->setObjectName(QStringLiteral("addUserClosePushButton"));
        addUserClosePushButton->setGeometry(QRect(340, 50, 80, 23));
        addUserFirstNameLineEdit = new QLineEdit(AddUserDialog);
        addUserFirstNameLineEdit->setObjectName(QStringLiteral("addUserFirstNameLineEdit"));
        addUserFirstNameLineEdit->setGeometry(QRect(100, 40, 231, 23));
        addUserFirstNameLineEdit->setMinimumSize(QSize(231, 0));
        addUserFirstNameLineEdit->setMaxLength(32);
        addUserLastNameLineEdit = new QLineEdit(AddUserDialog);
        addUserLastNameLineEdit->setObjectName(QStringLiteral("addUserLastNameLineEdit"));
        addUserLastNameLineEdit->setGeometry(QRect(100, 70, 231, 23));
        addUserLastNameLineEdit->setMinimumSize(QSize(231, 0));
        addUserLastNameLineEdit->setMaxLength(32);
        labelNickName = new QLabel(AddUserDialog);
        labelNickName->setObjectName(QStringLiteral("labelNickName"));
        labelNickName->setGeometry(QRect(20, 10, 71, 16));
        labelFirstName = new QLabel(AddUserDialog);
        labelFirstName->setObjectName(QStringLiteral("labelFirstName"));
        labelFirstName->setGeometry(QRect(20, 40, 71, 16));
        labelLastName = new QLabel(AddUserDialog);
        labelLastName->setObjectName(QStringLiteral("labelLastName"));
        labelLastName->setGeometry(QRect(20, 70, 71, 16));
        QWidget::setTabOrder(addUserNickNameLineEdit, addUserFirstNameLineEdit);
        QWidget::setTabOrder(addUserFirstNameLineEdit, addUserLastNameLineEdit);
        QWidget::setTabOrder(addUserLastNameLineEdit, addUserPushButton);
        QWidget::setTabOrder(addUserPushButton, addUserClosePushButton);

        retranslateUi(AddUserDialog);

        QMetaObject::connectSlotsByName(AddUserDialog);
    } // setupUi

    void retranslateUi(QDialog *AddUserDialog)
    {
        AddUserDialog->setWindowTitle(QApplication::translate("AddUserDialog", "Dialog", 0));
        addUserPushButton->setText(QApplication::translate("AddUserDialog", "Add User", 0));
        addUserClosePushButton->setText(QApplication::translate("AddUserDialog", "Close", 0));
        labelNickName->setText(QApplication::translate("AddUserDialog", "Nickname", 0));
        labelFirstName->setText(QApplication::translate("AddUserDialog", "First name", 0));
        labelLastName->setText(QApplication::translate("AddUserDialog", "Last name", 0));
    } // retranslateUi

};

namespace Ui {
    class AddUserDialog: public Ui_AddUserDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
