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
	QImage mThumbnail;			 //ÿ������ͼ���󱣴�һ������ͼ
	Algorithm* m_alg;			//ÿ������ͼ������һ���㷨��ָ��
	AlgorithmProperty* m_algPro; //ÿ������ͼ������һ���㷨���Ե�ָ��
};

#endif // THUMBNAIL_H
