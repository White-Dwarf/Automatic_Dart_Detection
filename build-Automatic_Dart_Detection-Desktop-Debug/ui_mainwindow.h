/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *button_image_detection;
    QPushButton *button_video_capture;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *Automatic_Dart_Counter;
    QSpacerItem *verticalSpacer;
    QPushButton *button_x01;
    QPushButton *button_cricket;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(827, 557);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(40, 0, 711, 511));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        button_image_detection = new QPushButton(verticalLayoutWidget);
        button_image_detection->setObjectName(QStringLiteral("button_image_detection"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(button_image_detection->sizePolicy().hasHeightForWidth());
        button_image_detection->setSizePolicy(sizePolicy1);
        button_image_detection->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(button_image_detection);

        button_video_capture = new QPushButton(verticalLayoutWidget);
        button_video_capture->setObjectName(QStringLiteral("button_video_capture"));
        sizePolicy1.setHeightForWidth(button_video_capture->sizePolicy().hasHeightForWidth());
        button_video_capture->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(button_video_capture);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        Automatic_Dart_Counter = new QLabel(verticalLayoutWidget);
        Automatic_Dart_Counter->setObjectName(QStringLiteral("Automatic_Dart_Counter"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Automatic_Dart_Counter->sizePolicy().hasHeightForWidth());
        Automatic_Dart_Counter->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Piboto Thin"));
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Automatic_Dart_Counter->setFont(font);
        Automatic_Dart_Counter->setTabletTracking(false);
        Automatic_Dart_Counter->setTextFormat(Qt::RichText);
        Automatic_Dart_Counter->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout->addWidget(Automatic_Dart_Counter);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        button_x01 = new QPushButton(verticalLayoutWidget);
        button_x01->setObjectName(QStringLiteral("button_x01"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(button_x01->sizePolicy().hasHeightForWidth());
        button_x01->setSizePolicy(sizePolicy3);
        button_x01->setMinimumSize(QSize(0, 70));
        QPalette palette;
        QBrush brush(QColor(128, 237, 103, 255));
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
        font1.setFamily(QStringLiteral("Noto Sans Samaritan"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        button_x01->setFont(font1);
        button_x01->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(button_x01);

        button_cricket = new QPushButton(verticalLayoutWidget);
        button_cricket->setObjectName(QStringLiteral("button_cricket"));
        button_cricket->setMinimumSize(QSize(0, 70));
        button_cricket->setFont(font1);

        verticalLayout->addWidget(button_cricket);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 70));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        button_image_detection->setText(QApplication::translate("MainWindow", "Image Detection", nullptr));
        button_video_capture->setText(QApplication::translate("MainWindow", "Video Capture", nullptr));
        Automatic_Dart_Counter->setText(QApplication::translate("MainWindow", "Automatic Dart Counter", nullptr));
        button_x01->setText(QApplication::translate("MainWindow", "X01", nullptr));
        button_cricket->setText(QApplication::translate("MainWindow", "Cricket", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
