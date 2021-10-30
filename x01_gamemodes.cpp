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
    x01->init(301,ui->doubleOut_checkbox->isChecked(),ui->masterOut_checkbox->isChecked());
    x01->show();
}

void X01_gamemodes::on_btn_gamemode_501_released()
{
    x01->init(501,ui->doubleOut_checkbox->isChecked(),ui->masterOut_checkbox->isChecked());
    x01->show();
}

void X01_gamemodes::on_btn_gamemode_701_released()
{ 
    x01->init(701,ui->doubleOut_checkbox->isChecked(),ui->masterOut_checkbox->isChecked());
    x01->show();
}

void X01_gamemodes::on_btn_gamemode_1001_released()
{
    x01->init(1001,ui->doubleOut_checkbox->isChecked(),ui->masterOut_checkbox->isChecked());
    x01->show();
}

void X01_gamemodes::on_btn_back_released()
{
    X01_gamemodes::close();
}

void X01_gamemodes::on_doubleOut_checkbox_released()
{
    ui->masterOut_checkbox->setChecked(false);
}


void X01_gamemodes::on_masterOut_checkbox_released()
{
    ui->doubleOut_checkbox->setChecked(false);
}

