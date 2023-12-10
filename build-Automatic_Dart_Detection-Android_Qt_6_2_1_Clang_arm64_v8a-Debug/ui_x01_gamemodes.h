/********************************************************************************
** Form generated from reading UI file 'x01_gamemodes.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_X01_GAMEMODES_H
#define UI_X01_GAMEMODES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_X01_gamemodes
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_back;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *doubleOut_checkbox;
    QCheckBox *masterOut_checkbox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_gamemode_301;
    QPushButton *btn_gamemode_501;
    QPushButton *btn_gamemode_701;
    QPushButton *btn_gamemode_1001;

    void setupUi(QDialog *X01_gamemodes)
    {
        if (X01_gamemodes->objectName().isEmpty())
            X01_gamemodes->setObjectName(QString::fromUtf8("X01_gamemodes"));
        X01_gamemodes->resize(702, 447);
        verticalLayout_2 = new QVBoxLayout(X01_gamemodes);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btn_back = new QPushButton(X01_gamemodes);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btn_back);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(X01_gamemodes);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        doubleOut_checkbox = new QCheckBox(X01_gamemodes);
        doubleOut_checkbox->setObjectName(QString::fromUtf8("doubleOut_checkbox"));

        horizontalLayout->addWidget(doubleOut_checkbox);

        masterOut_checkbox = new QCheckBox(X01_gamemodes);
        masterOut_checkbox->setObjectName(QString::fromUtf8("masterOut_checkbox"));

        horizontalLayout->addWidget(masterOut_checkbox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        btn_gamemode_301 = new QPushButton(X01_gamemodes);
        btn_gamemode_301->setObjectName(QString::fromUtf8("btn_gamemode_301"));
        QFont font1;
        font1.setPointSize(16);
        btn_gamemode_301->setFont(font1);

        verticalLayout->addWidget(btn_gamemode_301);

        btn_gamemode_501 = new QPushButton(X01_gamemodes);
        btn_gamemode_501->setObjectName(QString::fromUtf8("btn_gamemode_501"));
        btn_gamemode_501->setFont(font1);

        verticalLayout->addWidget(btn_gamemode_501);

        btn_gamemode_701 = new QPushButton(X01_gamemodes);
        btn_gamemode_701->setObjectName(QString::fromUtf8("btn_gamemode_701"));
        btn_gamemode_701->setFont(font1);

        verticalLayout->addWidget(btn_gamemode_701);

        btn_gamemode_1001 = new QPushButton(X01_gamemodes);
        btn_gamemode_1001->setObjectName(QString::fromUtf8("btn_gamemode_1001"));
        btn_gamemode_1001->setFont(font1);

        verticalLayout->addWidget(btn_gamemode_1001);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(X01_gamemodes);

        QMetaObject::connectSlotsByName(X01_gamemodes);
    } // setupUi

    void retranslateUi(QDialog *X01_gamemodes)
    {
        X01_gamemodes->setWindowTitle(QCoreApplication::translate("X01_gamemodes", "Dialog", nullptr));
        btn_back->setText(QCoreApplication::translate("X01_gamemodes", "Back", nullptr));
        label->setText(QCoreApplication::translate("X01_gamemodes", "Modes", nullptr));
        doubleOut_checkbox->setText(QCoreApplication::translate("X01_gamemodes", "Double Out", nullptr));
        masterOut_checkbox->setText(QCoreApplication::translate("X01_gamemodes", "Master Out", nullptr));
        btn_gamemode_301->setText(QCoreApplication::translate("X01_gamemodes", "301", nullptr));
        btn_gamemode_501->setText(QCoreApplication::translate("X01_gamemodes", "501", nullptr));
        btn_gamemode_701->setText(QCoreApplication::translate("X01_gamemodes", "701", nullptr));
        btn_gamemode_1001->setText(QCoreApplication::translate("X01_gamemodes", "1001", nullptr));
    } // retranslateUi

};

namespace Ui {
    class X01_gamemodes: public Ui_X01_gamemodes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_X01_GAMEMODES_H
