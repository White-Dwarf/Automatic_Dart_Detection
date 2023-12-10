#include "dart_detection.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <QDebug>

using namespace std;
using namespace cv;


Dart_Detection::Dart_Detection()
{
    
    
}

void Dart_Detection::imageProc()
{

    Mat Img_0_darts = imread("./../../images/Dartboard/Dartboard_0Darts_Bright.png");


    if (Img_0_darts.empty())
    {
       qDebug() << "!!! Failed imread(): image not found";
        // don't let the execution continue, else imshow() will crash.
    }

    namedWindow( "Display window", WINDOW_AUTOSIZE );// Create a window for display.
    imshow( "Display window", Img_0_darts );
    //imshow( "Display window", Img_1_darts );

}


//int Dart_Detection::openCamera(int id)
//{
//    //Open the default video camera
//     VideoCapture cap(id);

//     // if not success, exit program
//     if (cap.isOpened() == false)
//     {
//      cout << "Cannot open the video camera" << endl;
//      cin.get(); //wait for any key press
//      return -1;
//     }

//     double dWidth = cap.get(CAP_PROP_FRAME_WIDTH); //get the width of frames of the video
//     double dHeight = cap.get(CAP_PROP_FRAME_HEIGHT); //get the height of frames of the video

//     cout << "Resolution of the video : " << dWidth << " x " << dHeight << endl;

//     string window_name = "My Camera Feed";
//     namedWindow(window_name); //create a window called "My Camera Feed"

//     while (true)
//     {
//      Mat frame;
//      //take a frame every second/fps
//      waitKey(1000/fps);
//      bool bSuccess = cap.read(frame); // read a new frame from video

//      //Breaking the while loop if the frames cannot be captured
//      if (bSuccess == false)
//      {
//       cout << "Video camera is disconnected" << endl;
//       cin.get(); //Wait for any key press
//       break;
//      }

//      //show the frame in the created window
//      imshow(window_name, frame);

//      //wait for for 10 ms until any key is pressed.
//      //If the 'Esc' key is pressed, break the while loop.
//      //If the any other key is pressed, continue the loop
//      //If any key is not pressed withing 10 ms, continue the loop
//      if (waitKey(10) == 27)
//      {
//       cout << "Esc key is pressed by user. Stoppig the video" << endl;
//       break;
//      }
//     }

//}
void Dart_Detection::fetchImages(VideoCapture Camera)
{

}

