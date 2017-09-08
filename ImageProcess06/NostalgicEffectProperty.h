#ifndef NOSTALGICEFFECTPROPERTY_H
#define NOSTALGICEFFECTPROPERTY_H

#include <QWidget>
#include "ui_NostalgicEffectProperty.h"
#include "AlgorithmProperty.h"
#include "Algorithm.h"

class NostalgicEffectProperty : public AlgorithmProperty
{
	Q_OBJECT

public:
	NostalgicEffectProperty();
	~NostalgicEffectProperty();
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
	const QString name = "NostalgicEffectProperty";
	AlgorithmType type = NostalgicEffectType;

private:
	Ui::NostalgicEffectProperty ui;
};

#endif // NOSTALGICEFFECTPROPERTY_H
