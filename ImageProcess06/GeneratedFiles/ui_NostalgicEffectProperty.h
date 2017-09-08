/********************************************************************************
** Form generated from reading UI file 'NostalgicEffectProperty.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOSTALGICEFFECTPROPERTY_H
#define UI_NOSTALGICEFFECTPROPERTY_H

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
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NostalgicEffectProperty
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *resetBtn;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *contrastSlider;
    QLabel *contrastLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *NostalgicEffectProperty)
    {
        if (NostalgicEffectProperty->objectName().isEmpty())
            NostalgicEffectProperty->setObjectName(QStringLiteral("NostalgicEffectProperty"));
        NostalgicEffectProperty->resize(400, 169);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NostalgicEffectProperty->sizePolicy().hasHeightForWidth());
        NostalgicEffectProperty->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(NostalgicEffectProperty);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(NostalgicEffectProperty);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(13);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        resetBtn = new QPushButton(NostalgicEffectProperty);
        resetBtn->setObjectName(QStringLiteral("resetBtn"));

        horizontalLayout->addWidget(resetBtn);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(NostalgicEffectProperty);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        contrastSlider = new QSlider(NostalgicEffectProperty);
        contrastSlider->setObjectName(QStringLiteral("contrastSlider"));
        contrastSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(contrastSlider);

        contrastLabel = new QLabel(NostalgicEffectProperty);
        contrastLabel->setObjectName(QStringLiteral("contrastLabel"));

        horizontalLayout_2->addWidget(contrastLabel);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        buttonBox = new QDialogButtonBox(NostalgicEffectProperty);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_3->addWidget(buttonBox);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);


        retranslateUi(NostalgicEffectProperty);

        QMetaObject::connectSlotsByName(NostalgicEffectProperty);
    } // setupUi

    void retranslateUi(QWidget *NostalgicEffectProperty)
    {
        NostalgicEffectProperty->setWindowTitle(QApplication::translate("NostalgicEffectProperty", "NostalgicEffectProperty", 0));
        label->setText(QApplication::translate("NostalgicEffectProperty", "\346\200\200\346\227\247\346\225\210\346\236\234", 0));
        resetBtn->setText(QApplication::translate("NostalgicEffectProperty", "\351\207\215\347\275\256", 0));
        label_2->setText(QApplication::translate("NostalgicEffectProperty", "\345\217\215\345\267\256", 0));
        contrastLabel->setText(QApplication::translate("NostalgicEffectProperty", "100", 0));
    } // retranslateUi

};

namespace Ui {
    class NostalgicEffectProperty: public Ui_NostalgicEffectProperty {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOSTALGICEFFECTPROPERTY_H
