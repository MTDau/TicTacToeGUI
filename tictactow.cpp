#include "tictactow.h"
#include "./ui_tictactow.h"

TicTacTow::TicTacTow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacTow)
{
    ui->setupUi(this);
}

TicTacTow::~TicTacTow()
{
    delete ui;
}

void TicTacTow::on_pushButton_clicked()
{
    ui->Board01->setText("X");
}

