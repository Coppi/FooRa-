/********************************************************************************
** Form generated from reading UI file 'addmatch.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDMATCH_H
#define UI_ADDMATCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddMatchDialog
{
public:
    QFrame *redFrame;
    QComboBox *comboBoxRedOffense;
    QLabel *labelRedDefense;
    QLabel *labelRedOffense;
    QComboBox *comboBoxRedDefense;
    QLabel *labelTeamRed;
    QLabel *labelRedScore;
    QComboBox *comboBoxRedScore;
    QFrame *blueFrame;
    QComboBox *comboBoxBlueOffense;
    QLabel *labelBlueDefense;
    QLabel *labelBlueOffense;
    QComboBox *comboBoxBlueDefense;
    QLabel *labelTeamBlue;
    QLabel *labelBlueScore;
    QComboBox *comboBoxBlueScore;
    QPushButton *cancelButton;
    QPushButton *addMatchButton;

    void setupUi(QDialog *AddMatchDialog)
    {
        if (AddMatchDialog->objectName().isEmpty())
            AddMatchDialog->setObjectName(QStringLiteral("AddMatchDialog"));
        AddMatchDialog->resize(541, 261);
        redFrame = new QFrame(AddMatchDialog);
        redFrame->setObjectName(QStringLiteral("redFrame"));
        redFrame->setGeometry(QRect(20, 20, 241, 171));
        redFrame->setStyleSheet(QStringLiteral("background-color: rgb(255, 75, 75);"));
        redFrame->setFrameShape(QFrame::StyledPanel);
        redFrame->setFrameShadow(QFrame::Raised);
        comboBoxRedOffense = new QComboBox(redFrame);
        comboBoxRedOffense->setObjectName(QStringLiteral("comboBoxRedOffense"));
        comboBoxRedOffense->setGeometry(QRect(80, 80, 151, 27));
        comboBoxRedOffense->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        labelRedDefense = new QLabel(redFrame);
        labelRedDefense->setObjectName(QStringLiteral("labelRedDefense"));
        labelRedDefense->setGeometry(QRect(10, 50, 67, 17));
        labelRedDefense->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        labelRedOffense = new QLabel(redFrame);
        labelRedOffense->setObjectName(QStringLiteral("labelRedOffense"));
        labelRedOffense->setGeometry(QRect(10, 80, 67, 17));
        labelRedOffense->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        comboBoxRedDefense = new QComboBox(redFrame);
        comboBoxRedDefense->setObjectName(QStringLiteral("comboBoxRedDefense"));
        comboBoxRedDefense->setGeometry(QRect(80, 50, 151, 27));
        comboBoxRedDefense->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        labelTeamRed = new QLabel(redFrame);
        labelTeamRed->setObjectName(QStringLiteral("labelTeamRed"));
        labelTeamRed->setGeometry(QRect(10, 10, 67, 17));
        labelTeamRed->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        labelRedScore = new QLabel(redFrame);
        labelRedScore->setObjectName(QStringLiteral("labelRedScore"));
        labelRedScore->setGeometry(QRect(10, 140, 67, 17));
        labelRedScore->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        comboBoxRedScore = new QComboBox(redFrame);
        comboBoxRedScore->setObjectName(QStringLiteral("comboBoxRedScore"));
        comboBoxRedScore->setGeometry(QRect(80, 140, 51, 27));
        comboBoxRedScore->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        blueFrame = new QFrame(AddMatchDialog);
        blueFrame->setObjectName(QStringLiteral("blueFrame"));
        blueFrame->setGeometry(QRect(280, 20, 241, 171));
        blueFrame->setStyleSheet(QStringLiteral("background-color: rgb(65, 115, 255);"));
        blueFrame->setFrameShape(QFrame::StyledPanel);
        blueFrame->setFrameShadow(QFrame::Raised);
        comboBoxBlueOffense = new QComboBox(blueFrame);
        comboBoxBlueOffense->setObjectName(QStringLiteral("comboBoxBlueOffense"));
        comboBoxBlueOffense->setGeometry(QRect(80, 80, 151, 27));
        comboBoxBlueOffense->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        labelBlueDefense = new QLabel(blueFrame);
        labelBlueDefense->setObjectName(QStringLiteral("labelBlueDefense"));
        labelBlueDefense->setGeometry(QRect(10, 50, 67, 17));
        labelBlueDefense->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        labelBlueOffense = new QLabel(blueFrame);
        labelBlueOffense->setObjectName(QStringLiteral("labelBlueOffense"));
        labelBlueOffense->setGeometry(QRect(10, 80, 67, 17));
        labelBlueOffense->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        comboBoxBlueDefense = new QComboBox(blueFrame);
        comboBoxBlueDefense->setObjectName(QStringLiteral("comboBoxBlueDefense"));
        comboBoxBlueDefense->setGeometry(QRect(80, 50, 151, 27));
        comboBoxBlueDefense->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        labelTeamBlue = new QLabel(blueFrame);
        labelTeamBlue->setObjectName(QStringLiteral("labelTeamBlue"));
        labelTeamBlue->setGeometry(QRect(10, 10, 81, 17));
        labelTeamBlue->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        labelBlueScore = new QLabel(blueFrame);
        labelBlueScore->setObjectName(QStringLiteral("labelBlueScore"));
        labelBlueScore->setGeometry(QRect(10, 140, 67, 17));
        labelBlueScore->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        comboBoxBlueScore = new QComboBox(blueFrame);
        comboBoxBlueScore->setObjectName(QStringLiteral("comboBoxBlueScore"));
        comboBoxBlueScore->setGeometry(QRect(80, 140, 51, 27));
        comboBoxBlueScore->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));
        cancelButton = new QPushButton(AddMatchDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(120, 220, 99, 27));
        addMatchButton = new QPushButton(AddMatchDialog);
        addMatchButton->setObjectName(QStringLiteral("addMatchButton"));
        addMatchButton->setGeometry(QRect(320, 220, 99, 27));
        QWidget::setTabOrder(comboBoxRedDefense, comboBoxRedOffense);
        QWidget::setTabOrder(comboBoxRedOffense, comboBoxRedScore);
        QWidget::setTabOrder(comboBoxRedScore, comboBoxBlueDefense);
        QWidget::setTabOrder(comboBoxBlueDefense, comboBoxBlueOffense);
        QWidget::setTabOrder(comboBoxBlueOffense, comboBoxBlueScore);

        retranslateUi(AddMatchDialog);

        QMetaObject::connectSlotsByName(AddMatchDialog);
    } // setupUi

    void retranslateUi(QDialog *AddMatchDialog)
    {
        AddMatchDialog->setWindowTitle(QApplication::translate("AddMatchDialog", "Dialog", 0));
        labelRedDefense->setText(QApplication::translate("AddMatchDialog", "Defense", 0));
        labelRedOffense->setText(QApplication::translate("AddMatchDialog", "Offense", 0));
        labelTeamRed->setText(QApplication::translate("AddMatchDialog", "Team Red", 0));
        labelRedScore->setText(QApplication::translate("AddMatchDialog", "Score", 0));
        labelBlueDefense->setText(QApplication::translate("AddMatchDialog", "Defense", 0));
        labelBlueOffense->setText(QApplication::translate("AddMatchDialog", "Offense", 0));
        labelTeamBlue->setText(QApplication::translate("AddMatchDialog", "Team Blue", 0));
        labelBlueScore->setText(QApplication::translate("AddMatchDialog", "Score", 0));
        cancelButton->setText(QApplication::translate("AddMatchDialog", "Cancel", 0));
        addMatchButton->setText(QApplication::translate("AddMatchDialog", "Add Match", 0));
    } // retranslateUi

};

namespace Ui {
    class AddMatchDialog: public Ui_AddMatchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDMATCH_H
