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
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TicTacTow)
    {
        if (TicTacTow->objectName().isEmpty())
            TicTacTow->setObjectName("TicTacTow");
        TicTacTow->resize(632, 478);
        centralwidget = new QWidget(TicTacTow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 90, 41, 41));
        TicTacTow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TicTacTow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 632, 21));
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
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TicTacTow: public Ui_TicTacTow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TICTACTOW_H
