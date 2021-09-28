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

//setting initial Score Counter
void X01::setGameCounter(int gameCount)
{
    ui->count_label->setNum(gameCount);
    ui->player1_score_label->setNum(gameCount);
    ui->player2_score_label->setNum(gameCount);
}

void X01::setGameMode(bool checkbox)
{
    if(checkbox == true)
    {
      ui->mode_label->setText("Double Out");
    }
    else {
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
