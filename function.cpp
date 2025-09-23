#include "function.h"

function::function() {
    std::vector<std::vector<char>> board(SIZE, std::vector<char>(SIZE, '0'));
}
int function::get_turn(){
    return turn;
}
void function::reset(){
    for (int i=0;i < SIZE;i++ ){
        for (int j =0; j < SIZE; j++){
            board[i][j] = '0';
        }
    }
}
bool function::put(int row, int col, int turn){
    if (board[row][col] != '0')
    {
        return false;
    }
    char player{};
    if (turn%2==0)
        player = 'X';
    else
        player = 'O';
    board[row][col] = player;
    return true;
}
bool function::check_win(char& winner)
{ //Is there a winner yet or draw
    // Check row
    for (int i = 0; i < SIZE; i++)
    {
        auto x = board[i][0];
        if (x == 0)
            continue;
        winner = x;
        bool win{true};
        for (auto y : board[i])
        {
            if (x != y)
            {
                win = false;
                break;
            }
        }
        if (win)
            return true;
    }
    // Check collum
    for (int i = 0; i < SIZE; i++)
    {
        auto x = board[0][i];
        if (x == 0)
            continue;
        winner = x;
        bool win{true};
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
            return true;
    }
    // Check middle
    if (board[0][0] != 0)
    {
        auto x = board[0][0];
        winner = x;
        bool win{true};
        for (int i{}, j{}; i < SIZE && j < SIZE; i++, j++)
        {
            if (x != board[i][j])
            {
                win = false;
                break;
            }
        }
        if (win)
            return true;
    }
    if (board[0][SIZE - 1] != 0)
    {
        auto x = board[0][SIZE - 1];
        winner = x;
        bool win{true};
        for (int i{}, j{SIZE - 1}; i < SIZE && j >= 0; i++, j--)
        {
            if (x != board[i][j])
            {
                win = false;
                break;
            }
        }
        if (win)
            return true;
    }

    return false;
}
void print_winner(std::vector<std::vector<int>> &){

}
