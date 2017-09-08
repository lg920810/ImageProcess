#ifndef COMICEFFECT_H
#define COMICEFFECT_H

#include "Algorithm.h"

class ComicEffect : public Algorithm
{
	Q_OBJECT

public:
	ComicEffect();
	~ComicEffect();
	virtual AlgorithmType GetType() const override;
	virtual QString GetName() const override;
	virtual void ProcessImage() override;
	virtual QImage& CreatThumbnail(QImage &initImage) override;

private:
	const QString name = QString::fromLocal8Bit("Á¬»·»­");
	AlgorithmType type = ComicEffectType;
};

#endif // COMICEFFECT_H
