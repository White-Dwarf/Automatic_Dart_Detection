#ifndef DART_DETECTION_H
#define DART_DETECTION_H
#include <opencv2/opencv.hpp>

using namespace cv;

class Dart_Detection
{
public:
    Dart_Detection();
    void fetchImages(VideoCapture Camera);
    int openCamera(int id);

private:

int saveImgNum = 1;
int fps = 30;
};

#endif // DART_DETECTION_H
