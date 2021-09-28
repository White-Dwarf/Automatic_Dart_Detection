#include "mainwindow.h"
#include "dart_detection.h"
#include <QApplication>
#include <opencv2/highgui.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    Dart_Detection d;
    d.fetchImages();

    return a.exec();
}
