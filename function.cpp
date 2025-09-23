#include "function.h"

function::function() : winner{ '0' }, turn{ 0 }, board{ SIZE, std::vector<char>(SIZE, ' ') } {
}
int function::get_turn() {
	return turn;
}
char function::get_player(int row, int col) {
	return board[row][col];
}
void function::reset() {
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) {
			board[i][j] = ' ';
		}
	}
	turn = 0;
	winner = '0';
}
bool function::put(int row, int col) {
	//Not empty cell
	if (board[row][col] != ' ')
	{
		return false;
	}
	char player = (turn % 2 == 0) ? 'X' : 'O';
	board[row][col] = player;
	turn++;
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
	if (board[0][0] != 0)
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
	if (board[0][SIZE - 1] != 0)
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
