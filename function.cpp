#include "function.h"

function::function() : winner{ ' ' }, turn{ 0 }, game_over{ false }, board{ SIZE, std::vector<char>(SIZE, ' ') }
{
}
int function::get_turn() {
	return turn;
}
char function::get_player(int row, int col) {
	return board[row][col];
}
char function::get_winner() {
	return winner;
}
bool function::is_game_over() const {
	return game_over;
}
void function::reset() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			board[i][j] = ' ';
		}
	}
	turn = 0;
	winner = ' ';
	game_over = false;
}
bool function::put(int row, int col) {
	//Not empty cell
	if (board[row][col] != ' '||game_over)
		return false;

	char player = (turn % 2 == 0) ? 'X' : 'O';
	board[row][col] = player;
	turn++;
	if (check_win(winner)) {  // automatically update winner and game_over
		game_over = true;
	}
	else if (turn >= SIZE * SIZE) { // draw
		winner = ' ';
		game_over = true;
	}
	return true;
}
bool function::check_win(char& winner)
{
	// Check row
	for (int i = 0; i < SIZE; i++)
	{
		auto x = board[i][0];
		if (x == ' ')
			continue;
		bool win{ true };
		for (auto y : board[i])
		{
			if (x != y)
			{
				win = false;
				break;
			}
		}
		if (win)
		{
			winner = x;
			return true;
		}
	}
	// Check collum
	for (int i = 0; i < SIZE; i++)
	{
		auto x = board[0][i];
		if (x == ' ')
			continue;
		bool win{ true };
		for (int j = 0; j < SIZE; j++)
		{
			auto y = board[j][i];
			if (x != y)
			{
				win = false;
				break;
			}
		}
		if (win)
		{
			winner = x;
			return true;
		}
	}
	// Check diagonal
	if (board[0][0] != ' ')
	{
		auto x = board[0][0];
		bool win{ true };
		for (int i{}; i < SIZE; i++)
		{
			if (x != board[i][i])
			{
				win = false;
				break;
			}
		}
		if (win)
		{
			winner = x;
			return true;
		}
	}
	//Check the other diagonal
	if (board[0][SIZE - 1] != ' ')
	{
		auto x = board[0][SIZE - 1];
		bool win{ true };
		for (int i{}; i < SIZE; i++)
		{
			if (x != board[i][SIZE - 1 - i])
			{
				win = false;
				break;
			}
		}
		if (win)
		{
			winner = x;
			return true;
		}
	}
	return false;
}
