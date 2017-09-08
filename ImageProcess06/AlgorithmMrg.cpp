#include "AlgorithmMrg.h"

AlgorithmMrg::AlgorithmMrg(QObject *parent)
	: QObject(parent)
{
	RegisterAlgorithnm();
	RegisterAlgorithmProperty();
}

AlgorithmMrg::~AlgorithmMrg()
{

}

void AlgorithmMrg::RegisterAlgorithnm()
{
	mAlgorithmVec.clear();
	Algorithm* comic = new ComicEffect;
	Algorithm* nosta = new NostalgicEffect;
	mAlgorithmVec.push_back(comic);
	mAlgorithmVec.push_back(nosta);
	//int i = mAlgorithmVec.size();
}

void AlgorithmMrg::RegisterAlgorithmProperty()
{
	mAlgorithmPropertyVec.clear();
	AlgorithmProperty* comic = new ComicEffectProperty;
	AlgorithmProperty* nosta = new NostalgicEffectProperty;
	mAlgorithmPropertyVec.insert(comic->GetType(), comic);
	mAlgorithmPropertyVec.insert(nosta->GetType(), nosta);
}
