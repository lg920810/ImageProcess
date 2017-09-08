#ifndef THUMBNAIL_H
#define THUMBNAIL_H

#include <QToolButton>
#include "Algorithm.h"
#include "AlgorithmProperty.h"
#include "ComicEffectProperty.h"
#include "NostalgicEffectProperty.h"

class Thumbnail : public QToolButton
{
	Q_OBJECT

public:
	Thumbnail(Algorithm *alg, QWidget *parent);
	~Thumbnail();
	void SetThumbnail(QImage& image);

private slots:
	void OnClicked();

signals:
	void SendType(AlgorithmType);

private:
	QImage mThumbnail;			 //每个缩略图对象保存一个缩略图
	Algorithm* m_alg;			//每个缩略图都保存一个算法的指针
	AlgorithmProperty* m_algPro; //每个缩略图都保存一个算法属性的指针
};

#endif // THUMBNAIL_H
