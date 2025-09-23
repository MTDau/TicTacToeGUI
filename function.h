#ifndef FUNCTION_H
#define FUNCTION_H

#include <QObject>
#include <vector>
inline constexpr int SIZE{3};

class function
{
public:
    function();

    void reset();
    bool put(int row, int col, int turn);
    bool check_win(char& winner); //Is there a winner yet or draw
    void print_winner(std::vector<std::vector<int>> &);
    int get_turn();
private:
    std::vector<std::vector<char>> board;
    char winner{'0'};
    int turn{};
};

#endif // FUNCTION_H
