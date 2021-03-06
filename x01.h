#ifndef X01_H
#define X01_H

#include <QDialog>
#include <string>

namespace Ui {
class X01;
}

class X01 : public QDialog
{
    Q_OBJECT

public:
    X01(QWidget *parent = nullptr);
    ~X01();

    int gameCount = 0; // Counting during game

    //string gameMode;
    void calculateScore(int score);

    void setGameMode(bool doubleOut, bool masterOut);
    void setGameCounter(int gameCounter);
    void updateScore(int player);
    void init(int StartScore, bool doubleOut, bool masterOut);
    void startGame();

private:
    Ui::X01 *ui;
    int Player1_score;
    int Player2_score;
};

#endif // X01_H
