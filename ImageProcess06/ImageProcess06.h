#ifndef IMAGEPROCESS06_H
#define IMAGEPROCESS06_H

#include <QtWidgets/QMainWindow>
#include "ui_ImageProcess06.h"
#include <QLabel>
#include <QScrollArea>
#include <QPushButton>
#include <QLayout>
#include "ImageHolder.h"
#include "FilmTab.h"
#include "GenernalTab.h"
#include "AlgorithmMrg.h"

class ImageProcess06 : public QWidget
{
	Q_OBJECT

public:
	ImageProcess06(QWidget *parent = 0);
	~ImageProcess06();

	void InitUi();

	private slots:
	void OnOpenBtn();
	void receiveImage(QImage& image);

private:
	AlgorithmMrg* mpAlgMrg;
	Ui::ImageProcess06Class ui;
	FilmTab* pFilmTab;
	GenernalTab* pGenernalTab;
	QScrollArea *scrollArea;
	QScrollArea *contrastSrollArea;			//ÏÈÒþ²Ø
	QLabel* nMainImageLabel;
	QLabel* nChangedImageLabel;
	QSlider *zoomSlider;
};

#endif // IMAGEPROCESS04_H
