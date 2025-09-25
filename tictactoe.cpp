#include "tictactoe.h"
#include "ui_tictactoe.h"
#include <QString>
#include <QVBoxLayout>

TicTacToe::TicTacToe(QWidget* parent)
	: QMainWindow(parent)
	, ui(new Ui::TicTacToe)
	, func(std::make_unique<function>())
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
	ui->show_winner->setAlignment(Qt::AlignCenter);
	ui->show_winner->setVisible(false);
}

TicTacToe::~TicTacToe()
{
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

void TicTacToe::handle_clicks(int row, int col) {
	if (!func->put(row, col)) // ignore invalid move
		return;

	updateGame();

	if (func->is_game_over()) {
		ui->show_winner->setVisible(true);
		auto w = func->get_winner();
		ui->show_winner->setText(w != ' ' ? QString("%1 wins!").arg(w) : "Draw!");
	}
}



void TicTacToe::on_Reset_clicked()
{
	func->reset();
	updateGame();
	ui->show_winner->setVisible(false);
}
