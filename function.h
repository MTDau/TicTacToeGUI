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
    bool put(int row, int col);
    bool check_win(char& winner); //Is there a winner yet or draw
    int get_turn();
    char get_player(int row, int col);
private:
    std::vector<std::vector<char>> board;
    char winner;
    int turn{};
};

#endif // FUNCTION_H
