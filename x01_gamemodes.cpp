#include "x01_gamemodes.h"
#include "ui_x01_gamemodes.h"
#include "x01.h"

X01_gamemodes::X01_gamemodes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::X01_gamemodes)
{
    ui->setupUi(this);

    x01 = new X01(this);//parent is gamemodes

}

X01_gamemodes::~X01_gamemodes()
{
    delete ui;
}


void X01_gamemodes::on_btn_gamemode_301_released()
{
    x01->gameCount = 301;
    x01->show();
    x01->setGameCounter(x01->gameCount);
    x01->setGameMode(ui->doubleOut_radiobtn->isChecked());

}

void X01_gamemodes::on_btn_gamemode_501_released()
{
    x01->gameCount = 501;
    x01->show();
    x01->setGameCounter(x01->gameCount);
    x01->setGameMode(ui->doubleOut_radiobtn->isChecked());
}

void X01_gamemodes::on_btn_gamemode_701_released()
{
    x01->gameCount = 701;
    x01->show();
    x01->setGameCounter(x01->gameCount);
    x01->setGameMode(ui->doubleOut_radiobtn->isChecked());
}

void X01_gamemodes::on_btn_gamemode_1001_released()
{
    x01->gameCount = 1001;
    x01->show();
    x01->setGameCounter(x01->gameCount);
    x01->setGameMode(ui->doubleOut_radiobtn->isChecked());
}

void X01_gamemodes::on_btn_back_released()
{
    X01_gamemodes::close();
}
