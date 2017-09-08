#include "ComicEffect.h"

ComicEffect::ComicEffect()
{

}

ComicEffect::~ComicEffect()
{

}

AlgorithmType ComicEffect::GetType() const
{
	return type;
}

QString ComicEffect::GetName() const
{
	return name;
}

void ComicEffect::ProcessImage()
{
	QImage image = ImageHolder::GetInstance()->GetInitImage();
	cv::Mat src = QImage2cvMat(image);
	cv::cvtColor(src, src, CV_RGBA2RGB);
	cv::Mat dst(src.size(), CV_8UC3);

	for (int y = 0; y < src.rows; y++)
	{
		uchar* P0 = src.ptr<uchar>(y);
		uchar* P1 = dst.ptr<uchar>(y);
		for (int x = 0; x < src.cols; x++)
		{
			float B = P0[3 * x];
			float G = P0[3 * x + 1];
			float R = P0[3 * x + 2];
			float newB = abs(B - G + B + R)*G / 256;
			float newG = abs(B - G + B + R)*R / 256;
			float newR = abs(G - B + G + R)*R / 256;
			if (newB < 0)newB = 0;
			if (newB > 255)newB = 255;
			if (newG < 0)newG = 0;
			if (newG > 255)newG = 255;
			if (newR < 0)newR = 0;
			if (newR > 255)newR = 255;
			P1[3 * x] = (uchar)newB;
			P1[3 * x + 1] = (uchar)newG;
			P1[3 * x + 2] = (uchar)newR;
		}
	}
	image = cvMat2QImage(dst);
	ImageHolder::GetInstance()->SetImage(image);
}

QImage& ComicEffect::CreatThumbnail(QImage &initImage)
{
	initImage = ImageHolder::GetInstance()->GetImage().copy();
	cv::Mat src = QImage2cvMat(initImage);
	cv::pyrDown(src, src, cv::Size((src.cols) / 2, (src.rows) / 2));
	cv::cvtColor(src, src, CV_RGBA2RGB);
	cv::Mat dst(src.size(), CV_8UC3);

	for (int y = 0; y < src.rows; y++)
	{
		uchar* P0 = src.ptr<uchar>(y);
		uchar* P1 = dst.ptr<uchar>(y);
		for (int x = 0; x < src.cols; x++)
		{
			float B = P0[3 * x];
			float G = P0[3 * x + 1];
			float R = P0[3 * x + 2];
			float newB = abs(B - G + B + R)*G / 256;
			float newG = abs(B - G + B + R)*R / 256;
			float newR = abs(G - B + G + R)*R / 256;
			if (newB < 0)newB = 0;
			if (newB > 255)newB = 255;
			if (newG < 0)newG = 0;
			if (newG > 255)newG = 255;
			if (newR < 0)newR = 0;
			if (newR > 255)newR = 255;
			P1[3 * x] = (uchar)newB;
			P1[3 * x + 1] = (uchar)newG;
			P1[3 * x + 2] = (uchar)newR;
		}
	}
	initImage = cvMat2QImage(dst);
	//mpThumbnail->SetThumbnail(initImage);
	return initImage;
}
