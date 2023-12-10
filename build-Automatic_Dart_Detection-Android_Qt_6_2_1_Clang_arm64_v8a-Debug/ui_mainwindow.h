/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_image_detection;
    QPushButton *button_video_capture;
    QPushButton *calibration_btn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *Automatic_Dart_Counter;
    QSpacerItem *verticalSpacer;
    QPushButton *button_x01;
    QPushButton *button_cricket;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(827, 557);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        button_image_detection = new QPushButton(centralWidget);
        button_image_detection->setObjectName(QString::fromUtf8("button_image_detection"));
        sizePolicy.setHeightForWidth(button_image_detection->sizePolicy().hasHeightForWidth());
        button_image_detection->setSizePolicy(sizePolicy);
        button_image_detection->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(button_image_detection);

        button_video_capture = new QPushButton(centralWidget);
        button_video_capture->setObjectName(QString::fromUtf8("button_video_capture"));
        sizePolicy.setHeightForWidth(button_video_capture->sizePolicy().hasHeightForWidth());
        button_video_capture->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(button_video_capture);

        calibration_btn = new QPushButton(centralWidget);
        calibration_btn->setObjectName(QString::fromUtf8("calibration_btn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(calibration_btn->sizePolicy().hasHeightForWidth());
        calibration_btn->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(calibration_btn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        Automatic_Dart_Counter = new QLabel(centralWidget);
        Automatic_Dart_Counter->setObjectName(QString::fromUtf8("Automatic_Dart_Counter"));
        sizePolicy.setHeightForWidth(Automatic_Dart_Counter->sizePolicy().hasHeightForWidth());
        Automatic_Dart_Counter->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Piboto Thin")});
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        Automatic_Dart_Counter->setFont(font);
        Automatic_Dart_Counter->setTabletTracking(false);
        Automatic_Dart_Counter->setTextFormat(Qt::RichText);
        Automatic_Dart_Counter->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(Automatic_Dart_Counter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        button_x01 = new QPushButton(centralWidget);
        button_x01->setObjectName(QString::fromUtf8("button_x01"));
        sizePolicy.setHeightForWidth(button_x01->sizePolicy().hasHeightForWidth());
        button_x01->setSizePolicy(sizePolicy);
        button_x01->setMinimumSize(QSize(0, 70));
        QPalette palette;
        QBrush brush(QColor(222, 255, 216, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        button_x01->setPalette(palette);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Noto Sans Samaritan")});
        font1.setPointSize(20);
        font1.setBold(false);
        button_x01->setFont(font1);
        button_x01->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(button_x01);

        button_cricket = new QPushButton(centralWidget);
        button_cricket->setObjectName(QString::fromUtf8("button_cricket"));
        sizePolicy.setHeightForWidth(button_cricket->sizePolicy().hasHeightForWidth());
        button_cricket->setSizePolicy(sizePolicy);
        button_cricket->setMinimumSize(QSize(0, 70));
        QPalette palette1;
        QBrush brush2(QColor(227, 255, 222, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        button_cricket->setPalette(palette1);
        button_cricket->setFont(font1);

        verticalLayout->addWidget(button_cricket);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_image_detection->setText(QCoreApplication::translate("MainWindow", "Image Detection", nullptr));
        button_video_capture->setText(QCoreApplication::translate("MainWindow", "Video Capture", nullptr));
        calibration_btn->setText(QCoreApplication::translate("MainWindow", "Calibration", nullptr));
        Automatic_Dart_Counter->setText(QCoreApplication::translate("MainWindow", "Automatic Dart Counter", nullptr));
        button_x01->setText(QCoreApplication::translate("MainWindow", "X01", nullptr));
        button_cricket->setText(QCoreApplication::translate("MainWindow", "Cricket", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
