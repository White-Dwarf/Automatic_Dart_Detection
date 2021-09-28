#include "cricket.h"
#include "ui_cricket.h"

Cricket::Cricket(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cricket)
{
    ui->setupUi(this);
    ui->player1_score_label->setNum(0);
    ui->player2_score_label->setNum(0);
}

Cricket::~Cricket()
{
    delete ui;
}
