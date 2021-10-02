# Automatic_Dart_Detection
Counts dart thrown on board with cameras and writes score in GUI

-Using raspberry pi 3B+

Using opencv library for Linux users:

1. download opencv package from github using git clone
2. use cmake and set variable WITH_QT = true
3. cmake: set source and build folder and generate cmake
4. run the make and make install command
5. qt.pro file -> For opencv: Include files with INCLUDEPATH += and Lib files with LIBS += 

Tipp: To use cmake-gui command you need additional package with: "sudo apt-get install cmake-qt-gui" 


To detect the darts on the board - images of the Dartboard with 0 to 3 darts were taken in a bright and dark environment and saved into the images/Dartboard folder.
