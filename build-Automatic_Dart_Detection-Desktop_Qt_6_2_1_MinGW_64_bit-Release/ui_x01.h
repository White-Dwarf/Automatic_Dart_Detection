/********************************************************************************
** Form generated from reading UI file 'x01.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_X01_H
#define UI_X01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_X01
{
public:
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *count_label;
    QLabel *label_8;
    QLabel *mode_label;
    QLabel *player2_score_label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_14;
    QLabel *player1_score_label;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *X01)
    {
        if (X01->objectName().isEmpty())
            X01->setObjectName(QString::fromUtf8("X01"));
        X01->resize(1061, 662);
        formLayout_2 = new QFormLayout(X01);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(2);
        formLayout->setVerticalSpacing(2);
        formLayout->setContentsMargins(15, -1, -1, -1);
        label_2 = new QLabel(X01);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(true);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        count_label = new QLabel(X01);
        count_label->setObjectName(QString::fromUtf8("count_label"));
        count_label->setFont(font);
        count_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, count_label);

        label_8 = new QLabel(X01);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        mode_label = new QLabel(X01);
        mode_label->setObjectName(QString::fromUtf8("mode_label"));
        mode_label->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, mode_label);


        gridLayout->addLayout(formLayout, 1, 2, 1, 1);

        player2_score_label = new QLabel(X01);
        player2_score_label->setObjectName(QString::fromUtf8("player2_score_label"));
        player2_score_label->setMinimumSize(QSize(80, 80));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bitstream Vera Sans")});
        font1.setPointSize(28);
        font1.setBold(true);
        player2_score_label->setFont(font1);
        player2_score_label->setFrameShape(QFrame::Box);
        player2_score_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(player2_score_label, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_7 = new QLabel(X01);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFrameShape(QFrame::NoFrame);
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_7);

        label_9 = new QLabel(X01);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFrameShape(QFrame::NoFrame);
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_9);

        label_10 = new QLabel(X01);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFrameShape(QFrame::NoFrame);
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_10);

        label_14 = new QLabel(X01);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFrameShape(QFrame::Box);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_14);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        player1_score_label = new QLabel(X01);
        player1_score_label->setObjectName(QString::fromUtf8("player1_score_label"));
        player1_score_label->setMinimumSize(QSize(80, 80));
        player1_score_label->setFont(font1);
        player1_score_label->setFrameShape(QFrame::Box);
        player1_score_label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(player1_score_label, 2, 1, 1, 1);

        label_4 = new QLabel(X01);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bitstream Vera Sans")});
        font2.setPointSize(22);
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 0, 2, 1, 1);

        label_3 = new QLabel(X01);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bitstream Vera Sans")});
        font3.setPointSize(20);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_11 = new QLabel(X01);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_11);

        label_12 = new QLabel(X01);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_12);

        label_13 = new QLabel(X01);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_13);

        label_15 = new QLabel(X01);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFrameShape(QFrame::Box);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_15);


        gridLayout->addLayout(horizontalLayout_3, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 3, 2, 1, 1);

        label = new QLabel(X01);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 4, 3, 1, 1);


        horizontalLayout->addLayout(gridLayout);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, horizontalLayout);


        retranslateUi(X01);

        QMetaObject::connectSlotsByName(X01);
    } // setupUi

    void retranslateUi(QDialog *X01)
    {
        X01->setWindowTitle(QCoreApplication::translate("X01", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("X01", "X01 -", nullptr));
        count_label->setText(QCoreApplication::translate("X01", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("X01", "Mode -", nullptr));
        mode_label->setText(QCoreApplication::translate("X01", "TextLabel", nullptr));
        player2_score_label->setText(QCoreApplication::translate("X01", "Score", nullptr));
        label_7->setText(QCoreApplication::translate("X01", "Shot1", nullptr));
        label_9->setText(QCoreApplication::translate("X01", "Shot2", nullptr));
        label_10->setText(QCoreApplication::translate("X01", "Shot3", nullptr));
        label_14->setText(QCoreApplication::translate("X01", "Total", nullptr));
        player1_score_label->setText(QCoreApplication::translate("X01", "Score", nullptr));
        label_4->setText(QCoreApplication::translate("X01", "Player 2", nullptr));
        label_3->setText(QCoreApplication::translate("X01", "Player 1", nullptr));
        label_11->setText(QCoreApplication::translate("X01", "Shot1", nullptr));
        label_12->setText(QCoreApplication::translate("X01", "Shot2", nullptr));
        label_13->setText(QCoreApplication::translate("X01", "Shot3", nullptr));
        label_15->setText(QCoreApplication::translate("X01", "Total", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class X01: public Ui_X01 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_X01_H
