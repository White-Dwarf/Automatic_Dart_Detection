#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "x01_gamemodes.h"
#include "cricket.h"
#include "dart_detection.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    cricket = new Cricket(this);
    x01_gamemodes = new X01_gamemodes(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_button_x01_clicked()
{
    x01_gamemodes->show();
}

void MainWindow::on_button_cricket_pressed()
{

    cricket->show();
}

//open camera with id 0
void MainWindow::on_button_video_capture_released()
{
    Dart_Detection d;
    d.openCamera(0);
}

void MainWindow::on_button_image_detection_released()
{
    Dart_Detection d;
    VideoCapture cap(0);
    d.fetchImages(cap);
}
