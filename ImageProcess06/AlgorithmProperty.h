#ifndef ALGORITHMPROPERTY_H
#define ALGORITHMPROPERTY_H

#include <QWidget>
#include "AlgorithmType.h"
#include "ImageHolder.h"

class AlgorithmProperty : public QWidget
{
	Q_OBJECT

public:
	AlgorithmProperty() {}
	~AlgorithmProperty() {}
	virtual AlgorithmType GetType() const = 0;
	virtual QString GetName() const = 0;

private:
	
};

#endif // ALGORITHMPROPERTY_H
