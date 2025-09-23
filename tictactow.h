#ifndef TICTACTOW_H
#define TICTACTOW_H

#include <QMainWindow>
#include "function.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class TicTacTow;
}
QT_END_NAMESPACE

class TicTacTow : public QMainWindow
{
    Q_OBJECT

public:
    TicTacTow(QWidget *parent = nullptr);
    ~TicTacTow();
private slots:

    void on_Board00_clicked();

    void on_Board01_clicked();

    void on_Board02_clicked();

    void on_Board10_clicked();

    void on_Board11_clicked();

    void on_Board12_clicked();

    void on_Board20_clicked();

    void on_Board21_clicked();

    void on_Board22_clicked();


    void on_Reset_clicked();

private:
    Ui::TicTacTow *ui;
    function *func;
    void updateGame();
};
#endif // TICTACTOW_H
