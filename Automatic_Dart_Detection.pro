#-------------------------------------------------
#
# Project created by QtCreator 2021-09-21T21:03:05
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Automatic_Dart_Detection
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
#DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11
#unix: CONFIG += link_pkgconfig
#unix: PKGCONFIG += opencv

SOURCES += \
        calibration.cpp \
        main.cpp \
        mainwindow.cpp \
        x01.cpp \
        dart_detection.cpp \
        cricket.cpp \
        x01_gamemodes.cpp

HEADERS += \
        calibration.h \
        mainwindow.h \
        x01.h \
        dart_detection.h \
        cricket.h \
        x01_gamemodes.h

FORMS += \
        mainwindow.ui \
        x01.ui \
        cricket.ui \
        x01_gamemodes.ui

RESOURCES += \
    resources.qrc

#Here include own path to opencv hpp files
INCLUDEPATH += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\include

#Here link opencv lib files
#LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_calib3d454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_core454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_dnn454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_features2d454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_flann454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_gapi454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_highgui454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_imgcodecs454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_imgproc454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_ml454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_objdetect454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_photo454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_stitching454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_video454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\libopencv_videoio454.dll
LIBS += C:\Users\timon\Desktop\Coding\Projects\OpenCv\opencv\build\bin\opencv_videoio_ffmpeg454_64.dll


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

