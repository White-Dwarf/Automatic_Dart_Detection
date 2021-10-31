#include "x01.h"
#include "ui_x01.h"

X01::X01(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::X01)
{
    ui->setupUi(this);
}

X01::~X01()
{
    delete ui;
}

void X01::init(int StartScore, bool doubleOut, bool masterOut)
{
    setGameCounter(StartScore);
    setGameMode(doubleOut,masterOut);

}

//setting initial Score Counter
void X01::setGameCounter(int gameCount)
{
    ui->count_label->setNum(gameCount);
    Player1_score = gameCount;
    Player2_score = gameCount;
    ui->player1_score_label->setNum(Player1_score);
    ui->player2_score_label->setNum(Player2_score);
}

void X01::setGameMode(bool doubleOut, bool masterOut)
{
    if(doubleOut)
    {
      ui->mode_label->setText("Double Out");
    }
    else if(masterOut)
    {
      ui->mode_label->setText("Master Out");
    }
    else
    {
      ui->mode_label->setText("Straight Out");
    }
}

void X01::updateScore(int player)
{
   if(player == 1)
   {
       ui->player1_score_label->setNum(gameCount - Player1_score);
   }
   if(player == 2)
   {
       ui->player2_score_label->setNum(gameCount - Player2_score);
   }
}

void X01::startGame()
{

    while(Player1_score || Player2_score != 0)
    {

        //fetch images
        //get score
        //display score on gui

        //compare if score is below 0 -> if true reset score and display in red
    }

    //start winning screen -> anzahl round und name des gewinners

}
