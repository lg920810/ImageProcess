#ifndef COMICEFFECTPROPERTY_H
#define COMICEFFECTPROPERTY_H

#include <QWidget>
#include "ui_ComicEffectProperty.h"
#include "AlgorithmProperty.h"
#include <opencv2/opencv.hpp>  

class ImageProcess03;

class ComicEffectProperty : public AlgorithmProperty
{
	Q_OBJECT

public:
	ComicEffectProperty();
	~ComicEffectProperty();

	virtual AlgorithmType GetType() const override;
	virtual QString GetName() const override;

private slots:
	void ContrastChanged(int);
	void OnCancel();
	void OnOK();
	void OnResetBtn();

signals:
	void SendCancel();
	void SendOK();

private:
	//const QString name = QString::fromUtf8("Á¬»·»­");
	const QString name = "ComicEffectProperty";
	AlgorithmType type = ComicEffectType;

private:
	Ui::ComicEffectProperty ui;
};

#endif // COMICEFFECTPROPERTY_H
