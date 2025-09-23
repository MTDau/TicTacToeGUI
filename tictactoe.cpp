#include "tictactow.h"
#include "./ui_tictactow.h"

TicTacTow::TicTacTow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacTow)
    , func(new function)
{
    ui->setupUi(this);
}

TicTacTow::~TicTacTow()
{
    delete ui;
}

void TicTacTow::updateGame()
{

}

void TicTacTow::on_Board00_clicked()
{
    func->put(0,0,func->get_turn());
}

void TicTacTow::on_Board01_clicked()
{
    func->put(0,1,func->get_turn());
}


void TicTacTow::on_Board02_clicked()
{
func->put(0,2,func->get_turn());
}

void TicTacTow::on_Board10_clicked()
{
func->put(1,0,func->get_turn());
}


void TicTacTow::on_Board11_clicked()
{
func->put(1,1,func->get_turn());
}


void TicTacTow::on_Board12_clicked()
{
func->put(1,2,func->get_turn());
}

void TicTacTow::on_Board20_clicked()
{
func->put(2,0,func->get_turn());
}


void TicTacTow::on_Board21_clicked()
{
func->put(2,1,func->get_turn());
}


void TicTacTow::on_Board22_clicked()
{
func->put(2,2,func->get_turn());
}



void TicTacTow::on_Reset_clicked()
{
    func->reset();
}

