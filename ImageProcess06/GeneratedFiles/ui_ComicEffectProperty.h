/********************************************************************************
** Form generated from reading UI file 'ComicEffectProperty.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMICEFFECTPROPERTY_H
#define UI_COMICEFFECTPROPERTY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComicEffectProperty
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *titleLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *contrastSlider;
    QLabel *contrastLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSlider *highlightSlider;
    QLabel *highlightLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSlider *saturationSlider;
    QLabel *saturationLabel;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *ComicEffectProperty)
    {
        if (ComicEffectProperty->objectName().isEmpty())
            ComicEffectProperty->setObjectName(QStringLiteral("ComicEffectProperty"));
        ComicEffectProperty->resize(536, 311);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ComicEffectProperty->sizePolicy().hasHeightForWidth());
        ComicEffectProperty->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ComicEffectProperty);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        titleLabel = new QLabel(ComicEffectProperty);
        titleLabel->setObjectName(QStringLiteral("titleLabel"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        titleLabel->setFont(font);

        horizontalLayout->addWidget(titleLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        resetBtn = new QPushButton(ComicEffectProperty);
        resetBtn->setObjectName(QStringLiteral("resetBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(resetBtn->sizePolicy().hasHeightForWidth());
        resetBtn->setSizePolicy(sizePolicy1);
        resetBtn->setMinimumSize(QSize(20, 20));

        horizontalLayout->addWidget(resetBtn);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(ComicEffectProperty);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        contrastSlider = new QSlider(ComicEffectProperty);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        contrastSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(contrastSlider);

        contrastLabel = new QLabel(ComicEffectProperty);
        contrastLabel->setObjectName(QStringLiteral("contrastLabel"));

        horizontalLayout_2->addWidget(contrastLabel);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(ComicEffectProperty);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        highlightSlider = new QSlider(ComicEffectProperty);
        highlightSlider->setObjectName(QStringLiteral("highlightSlider"));
        highlightSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(highlightSlider);

        highlightLabel = new QLabel(ComicEffectProperty);
        highlightLabel->setObjectName(QStringLiteral("highlightLabel"));

        horizontalLayout_3->addWidget(highlightLabel);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_3 = new QLabel(ComicEffectProperty);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        saturationSlider = new QSlider(ComicEffectProperty);
        saturationSlider->setObjectName(QStringLiteral("saturationSlider"));
        saturationSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(saturationSlider);

        saturationLabel = new QLabel(ComicEffectProperty);
        saturationLabel->setObjectName(QStringLiteral("saturationLabel"));

        horizontalLayout_4->addWidget(saturationLabel);


        gridLayout->addLayout(horizontalLayout_4, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButton = new QRadioButton(ComicEffectProperty);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_5->addWidget(radioButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_5, 4, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        buttonBox = new QDialogButtonBox(ComicEffectProperty);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_6->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_6, 5, 0, 1, 1);


        retranslateUi(ComicEffectProperty);

        QMetaObject::connectSlotsByName(ComicEffectProperty);
    } // setupUi

    void retranslateUi(QWidget *ComicEffectProperty)
    {
        ComicEffectProperty->setWindowTitle(QApplication::translate("ComicEffectProperty", "ComicEffectProperty", 0));
        titleLabel->setText(QApplication::translate("ComicEffectProperty", "\350\277\236\347\216\257\347\224\273\346\225\210\346\236\234", 0));
        resetBtn->setText(QApplication::translate("ComicEffectProperty", "\351\273\230\350\256\244", 0));
        label->setText(QApplication::translate("ComicEffectProperty", "\345\217\215  \345\267\256", 0));
        contrastLabel->setText(QApplication::translate("ComicEffectProperty", "50", 0));
        label_2->setText(QApplication::translate("ComicEffectProperty", "\351\253\230  \345\205\211", 0));
        highlightLabel->setText(QApplication::translate("ComicEffectProperty", "50", 0));
        label_3->setText(QApplication::translate("ComicEffectProperty", "\351\245\261\345\222\214\345\272\246", 0));
        saturationLabel->setText(QApplication::translate("ComicEffectProperty", "50", 0));
        radioButton->setText(QApplication::translate("ComicEffectProperty", "\344\272\272\345\203\217\344\274\230\345\214\226", 0));
    } // retranslateUi

};

namespace Ui {
    class ComicEffectProperty: public Ui_ComicEffectProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMICEFFECTPROPERTY_H
