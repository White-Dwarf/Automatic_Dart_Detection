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
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++
unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += opencv

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    x01.cpp \
    dart_detection.cpp \
    cricket.cpp \
    x01_gamemodes.cpp

HEADERS += \
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

#Here include own path to opencv hpp files
INCLUDEPATH += /usr/local/include/opencv4

#Here link opencv lib files
LIBS += /usr/local/lib/libopencv_calib3d.so.4.5.3
LIBS += /usr/local/lib/libopencv_core.so.4.5.3
LIBS += /usr/local/lib/libopencv_dnn.so.4.5.3
LIBS += /usr/local/lib/libopencv_features2d.so.4.5.3
#LIBS += /usr/local/lib/libopencv_libopencv_flann.so
#LIBS += /usr/local/lib/libopencv_libopencv_gapi.so
LIBS += /usr/local/lib/libopencv_highgui.so.4.5.3
LIBS += /usr/local/lib/libopencv_imgcodecs.so.4.5.3
LIBS += /usr/local/lib/libopencv_imgproc.so.4.5.3
LIBS += /usr/local/lib/libopencv_ml.so.4.5.3
LIBS += /usr/local/lib/libopencv_objdetect.so.4.5.3
LIBS += /usr/local/lib/libopencv_photo.so.4.5.3
LIBS += /usr/local/lib/libopencv_stitching.so.4.5.3
LIBS += /usr/local/lib/libopencv_video.so.4.5.3
LIBS += /usr/local/lib/libopencv_videoio.so.4.5.3


#LIBS += `pkg-config --libs opencv`
#LIBS += `pkg-config opencv4 --cflags --clibs`
#LIBS += -libopencv_core -libopencv_imgproc -libopencv_imgcodecs -libopencv_highgui -libopencv_video




# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
