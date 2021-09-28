#ifndef X01_GAMEMODES_H
#define X01_GAMEMODES_H

#include <QDialog>
#include "x01.h"

namespace Ui {
class X01_gamemodes;
}

class X01_gamemodes : public QDialog
{
    Q_OBJECT

public:
    explicit X01_gamemodes(QWidget *parent = nullptr);
    ~X01_gamemodes();

    X01 * x01;//pointer to X01 class

private slots:

    void on_btn_gamemode_301_released();

    void on_btn_gamemode_501_released();

    void on_btn_gamemode_701_released();

    void on_btn_gamemode_1001_released();

    void on_btn_back_released();

private:
    Ui::X01_gamemodes *ui;
    bool doubleOut;
};

#endif // X01_GAMEMODES_H
