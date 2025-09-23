/********************************************************************************
** Form generated from reading UI file 'tictactoe.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TICTACTOE_H
#define UI_TICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TicTacToe
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

    void setupUi(QMainWindow *TicTacToe)
    {
        if (TicTacToe->objectName().isEmpty())
            TicTacToe->setObjectName("TicTacToe");
        TicTacToe->resize(800, 600);
        centralwidget = new QWidget(TicTacToe);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(200, 40, 351, 381));
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
        Reset->setGeometry(QRect(330, 450, 80, 24));
        TicTacToe->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TicTacToe);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TicTacToe->setMenuBar(menubar);
        statusbar = new QStatusBar(TicTacToe);
        statusbar->setObjectName("statusbar");
        TicTacToe->setStatusBar(statusbar);

        retranslateUi(TicTacToe);

        QMetaObject::connectSlotsByName(TicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *TicTacToe)
    {
        TicTacToe->setWindowTitle(QCoreApplication::translate("TicTacToe", "TicTacToe", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TicTacToe", "Tic Tac Toe 3 x 3", nullptr));
        Board00->setText(QString());
        Board10->setText(QString());
        Board20->setText(QString());
        Board11->setText(QString());
        Board12->setText(QString());
        Board01->setText(QString());
        Board02->setText(QString());
        Board22->setText(QString());
        Board21->setText(QString());
        Reset->setText(QCoreApplication::translate("TicTacToe", "Reset ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TicTacToe: public Ui_TicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOE_H
