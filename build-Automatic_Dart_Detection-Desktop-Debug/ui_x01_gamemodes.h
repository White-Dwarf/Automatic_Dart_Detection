/********************************************************************************
** Form generated from reading UI file 'x01_gamemodes.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_X01_GAMEMODES_H
#define UI_X01_GAMEMODES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_X01_gamemodes
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_back;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QRadioButton *doubleOut_radiobtn;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btn_gamemode_301;
    QPushButton *btn_gamemode_501;
    QPushButton *btn_gamemode_701;
    QPushButton *btn_gamemode_1001;

    void setupUi(QDialog *X01_gamemodes)
    {
        if (X01_gamemodes->objectName().isEmpty())
            X01_gamemodes->setObjectName(QStringLiteral("X01_gamemodes"));
        X01_gamemodes->resize(702, 447);
        verticalLayoutWidget = new QWidget(X01_gamemodes);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 591, 381));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_back = new QPushButton(verticalLayoutWidget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btn_back);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 20));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        doubleOut_radiobtn = new QRadioButton(verticalLayoutWidget);
        doubleOut_radiobtn->setObjectName(QStringLiteral("doubleOut_radiobtn"));
        doubleOut_radiobtn->setLayoutDirection(Qt::LeftToRight);
        doubleOut_radiobtn->setChecked(false);

        verticalLayout->addWidget(doubleOut_radiobtn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        verticalLayout->addItem(verticalSpacer_2);

        btn_gamemode_301 = new QPushButton(verticalLayoutWidget);
        btn_gamemode_301->setObjectName(QStringLiteral("btn_gamemode_301"));
        QFont font1;
        font1.setPointSize(16);
        btn_gamemode_301->setFont(font1);

        verticalLayout->addWidget(btn_gamemode_301);

        btn_gamemode_501 = new QPushButton(verticalLayoutWidget);
        btn_gamemode_501->setObjectName(QStringLiteral("btn_gamemode_501"));
        btn_gamemode_501->setFont(font1);

        verticalLayout->addWidget(btn_gamemode_501);

        btn_gamemode_701 = new QPushButton(verticalLayoutWidget);
        btn_gamemode_701->setObjectName(QStringLiteral("btn_gamemode_701"));
        btn_gamemode_701->setFont(font1);

        verticalLayout->addWidget(btn_gamemode_701);

        btn_gamemode_1001 = new QPushButton(verticalLayoutWidget);
        btn_gamemode_1001->setObjectName(QStringLiteral("btn_gamemode_1001"));
        btn_gamemode_1001->setFont(font1);

        verticalLayout->addWidget(btn_gamemode_1001);


        retranslateUi(X01_gamemodes);

        QMetaObject::connectSlotsByName(X01_gamemodes);
    } // setupUi

    void retranslateUi(QDialog *X01_gamemodes)
    {
        X01_gamemodes->setWindowTitle(QApplication::translate("X01_gamemodes", "Dialog", nullptr));
        btn_back->setText(QApplication::translate("X01_gamemodes", "Back", nullptr));
        label->setText(QApplication::translate("X01_gamemodes", "Modes", nullptr));
        doubleOut_radiobtn->setText(QApplication::translate("X01_gamemodes", "Double Out", nullptr));
        btn_gamemode_301->setText(QApplication::translate("X01_gamemodes", "301", nullptr));
        btn_gamemode_501->setText(QApplication::translate("X01_gamemodes", "501", nullptr));
        btn_gamemode_701->setText(QApplication::translate("X01_gamemodes", "701", nullptr));
        btn_gamemode_1001->setText(QApplication::translate("X01_gamemodes", "1001", nullptr));
    } // retranslateUi

};

namespace Ui {
    class X01_gamemodes: public Ui_X01_gamemodes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_X01_GAMEMODES_H
