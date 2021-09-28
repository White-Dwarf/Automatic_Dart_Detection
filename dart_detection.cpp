#include "dart_detection.h"
#include <opencv2/highgui.hpp>

Dart_Detection::Dart_Detection()
{
    
    
}

void Dart_Detection::fetchImages()
{
     cv::Mat image;
     cv::VideoCapture stream1(0);

     stream1.read(image);

     cv::imshow("Camera output",image);
}
