#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cricket.h"
#include "x01_gamemodes.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Cricket *cricket;
    X01_gamemodes * x01_gamemodes;

private slots:
    void on_button_x01_clicked();

    void on_button_cricket_pressed();

    void on_button_video_capture_released();

    void on_button_image_detection_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
