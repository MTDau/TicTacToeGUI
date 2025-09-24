#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <QMessageBox>

TicTacToe::TicTacToe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TicTacToe)
    , func(new function)
{
    ui->setupUi(this);
    // Map UI buttons to array
    board_buttons[0][0] = ui->Board00;
    board_buttons[0][1] = ui->Board01;
    board_buttons[0][2] = ui->Board02;
    board_buttons[1][0] = ui->Board10;
    board_buttons[1][1] = ui->Board11;
    board_buttons[1][2] = ui->Board12;
    board_buttons[2][0] = ui->Board20;
    board_buttons[2][1] = ui->Board21;
    board_buttons[2][2] = ui->Board22;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            connect(board_buttons[i][j], &QPushButton::clicked,
                    [=]() { handle_clicks(i, j); });
        }
    }

    //Hide the show_winner
    ui->show_winner->setVisible(false);
}

TicTacToe::~TicTacToe()
{
    delete func;
    delete ui;
}


void TicTacToe::updateGame()
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board_buttons[i][j]->setText(
                QString(func->get_player(i, j)) // assumes get_player returns char
                );
        }
    }
}

void TicTacToe::handle_clicks(int row, int col) {//What to do after clicks
    func->put(row, col);
    updateGame();  // redraw board after every move
    // Check for winner
    char winner;
    if (func->check_win(winner)) {
        ui->show_winner->setVisible(true);  // show the frame
        QMessageBox::information(this, "Game Over",
            QString("Player %1 wins!").arg(QChar(winner)));
    }
    // Optional: check for draw
    else if (func->get_turn() >= SIZE * SIZE) {
        QMessageBox::information(this, "Game Over", "It's a draw!");
    }
}

void TicTacToe::on_Reset_clicked()
{
    func->reset();
    updateGame();
    ui->show_winner->setVisible(false); // hide winner frame
}
