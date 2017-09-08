#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <QObject>
#include "AlgorithmType.h"
#include "ImageHolder.h"
#include <opencv2/opencv.hpp>  

class Algorithm : public QObject
{
	Q_OBJECT

public:
	Algorithm() {}
	~Algorithm() {}
	virtual AlgorithmType GetType() const = 0;	//Ö»¶Á(read-only)º¯Êý
	virtual QString GetName() const = 0;
	virtual void ProcessImage() = 0;
	virtual QImage& CreatThumbnail(QImage &initImage) = 0;

	static QImage cvMat2QImage(const cv::Mat& mat);
	static cv::Mat QImage2cvMat(const QImage& image);

private:

};

#endif // ALGORITHM_H
