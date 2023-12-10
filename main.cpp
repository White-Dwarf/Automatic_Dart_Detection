#include "mainwindow.h"
#include "dart_detection.h"
#include <QApplication>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{

   QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
