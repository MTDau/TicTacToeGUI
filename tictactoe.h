#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QMainWindow>
#include <QPushButton>
#include "function.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class TicTacToe;
}
QT_END_NAMESPACE

class TicTacToe : public QMainWindow
{
    Q_OBJECT

public:
    TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();

private slots:

    void on_Reset_clicked();
private:
    Ui::TicTacToe *ui;
    std::unique_ptr<function> func;
    void updateGame();
    QPushButton* board_buttons[SIZE][SIZE];//Handle all push button
    void handle_clicks(int row, int col);//What to do after clicks
};
#endif // TICTACTOE_H
