/********************************************************************************
** Form generated from reading UI file 'ImageProcess06.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEPROCESS06_H
#define UI_IMAGEPROCESS06_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageProcess06Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageProcess06Class)
    {
        if (ImageProcess06Class->objectName().isEmpty())
            ImageProcess06Class->setObjectName(QStringLiteral("ImageProcess06Class"));
        ImageProcess06Class->resize(600, 400);
        menuBar = new QMenuBar(ImageProcess06Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ImageProcess06Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageProcess06Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageProcess06Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(ImageProcess06Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ImageProcess06Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ImageProcess06Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageProcess06Class->setStatusBar(statusBar);

        retranslateUi(ImageProcess06Class);

        QMetaObject::connectSlotsByName(ImageProcess06Class);
    } // setupUi

    void retranslateUi(QMainWindow *ImageProcess06Class)
    {
        ImageProcess06Class->setWindowTitle(QApplication::translate("ImageProcess06Class", "ImageProcess06", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageProcess06Class: public Ui_ImageProcess06Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEPROCESS06_H
