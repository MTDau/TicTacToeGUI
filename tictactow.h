#ifndef TICTACTOW_H
#define TICTACTOW_H

#include <QMainWindow>

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
    void on_pushButton_clicked();

private:
    Ui::TicTacTow *ui;
};
#endif // TICTACTOW_H
