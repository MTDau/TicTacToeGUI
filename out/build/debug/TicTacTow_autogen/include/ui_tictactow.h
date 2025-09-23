/********************************************************************************
** Form generated from reading UI file 'tictactow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOW_H
#define UI_TICTACTOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacTow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *Board00;
    QPushButton *Board10;
    QPushButton *Board20;
    QPushButton *Board11;
    QPushButton *Board12;
    QPushButton *Board01;
    QPushButton *Board02;
    QPushButton *Board22;
    QPushButton *Board21;
    QPushButton *Reset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TicTacTow)
    {
        if (TicTacTow->objectName().isEmpty())
            TicTacTow->setObjectName("TicTacTow");
        TicTacTow->resize(675, 564);
        centralwidget = new QWidget(TicTacTow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(150, 30, 351, 381));
        QFont font;
        font.setPointSize(15);
        groupBox->setFont(font);
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Board00 = new QPushButton(groupBox);
        Board00->setObjectName("Board00");
        Board00->setGeometry(QRect(60, 80, 71, 71));
        Board10 = new QPushButton(groupBox);
        Board10->setObjectName("Board10");
        Board10->setGeometry(QRect(60, 160, 71, 71));
        Board20 = new QPushButton(groupBox);
        Board20->setObjectName("Board20");
        Board20->setGeometry(QRect(60, 240, 71, 71));
        Board11 = new QPushButton(groupBox);
        Board11->setObjectName("Board11");
        Board11->setGeometry(QRect(140, 160, 71, 71));
        Board12 = new QPushButton(groupBox);
        Board12->setObjectName("Board12");
        Board12->setGeometry(QRect(220, 160, 71, 71));
        Board01 = new QPushButton(groupBox);
        Board01->setObjectName("Board01");
        Board01->setGeometry(QRect(140, 80, 71, 71));
        Board02 = new QPushButton(groupBox);
        Board02->setObjectName("Board02");
        Board02->setGeometry(QRect(220, 80, 71, 71));
        Board22 = new QPushButton(groupBox);
        Board22->setObjectName("Board22");
        Board22->setGeometry(QRect(220, 240, 71, 71));
        Board21 = new QPushButton(groupBox);
        Board21->setObjectName("Board21");
        Board21->setGeometry(QRect(140, 240, 71, 71));
        Board00->raise();
        Board10->raise();
        Board20->raise();
        Board11->raise();
        Board01->raise();
        Board02->raise();
        Board22->raise();
        Board21->raise();
        Board12->raise();
        Reset = new QPushButton(centralwidget);
        Reset->setObjectName("Reset");
        Reset->setGeometry(QRect(280, 440, 80, 24));
        TicTacTow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TicTacTow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 675, 21));
        TicTacTow->setMenuBar(menubar);
        statusbar = new QStatusBar(TicTacTow);
        statusbar->setObjectName("statusbar");
        TicTacTow->setStatusBar(statusbar);

        retranslateUi(TicTacTow);

        QMetaObject::connectSlotsByName(TicTacTow);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacTow)
    {
        TicTacTow->setWindowTitle(QCoreApplication::translate("TicTacTow", "TicTacTow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TicTacTow", "Tic Tac Toe 3 x 3", nullptr));
        Board00->setText(QString());
        Board10->setText(QString());
        Board20->setText(QString());
        Board11->setText(QString());
        Board12->setText(QString());
        Board01->setText(QString());
        Board02->setText(QString());
        Board22->setText(QString());
        Board21->setText(QString());
        Reset->setText(QCoreApplication::translate("TicTacTow", "Reset ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacTow: public Ui_TicTacTow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOW_H
