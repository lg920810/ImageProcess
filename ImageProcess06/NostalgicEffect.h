#ifndef NOSTALGICEFFECT_H
#define NOSTALGICEFFECT_H

#include "Algorithm.h"
 
class NostalgicEffect : public Algorithm
{
public:
	NostalgicEffect();
	~NostalgicEffect();

	virtual AlgorithmType GetType() const override;
	virtual QString GetName()const override;
	virtual void ProcessImage() override;
	virtual QImage& CreatThumbnail(QImage &initImage) override;

private:
	const QString name = QString::fromLocal8Bit("»³¾É");
	//const QString name = "NostalgicEffect";
	AlgorithmType type = NostalgicEffectType;
};

#endif // NOSTALGICEFFECT_H
