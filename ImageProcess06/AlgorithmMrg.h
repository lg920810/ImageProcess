#ifndef ALGORITHMMRG_H
#define ALGORITHMMRG_H

#include <QObject>
#include "Algorithm.h"
#include "AlgorithmProperty.h"
#include "ComicEffectProperty.h"
#include "NostalgicEffectProperty.h"

#include "AlgorithmType.h"
#include "ComicEffect.h"
#include "NostalgicEffect.h"

class AlgorithmMrg : public QObject
{
	Q_OBJECT

public:
	AlgorithmMrg(QObject *parent);
	~AlgorithmMrg();
	//void InitAlgorithmn();
	void RegisterAlgorithnm();
	void RegisterAlgorithmProperty();

	QVector<Algorithm*> mAlgorithmVec;
	QMap<AlgorithmType, AlgorithmProperty*> mAlgorithmPropertyVec;
};

#endif // ALGORITHMMRG_H
