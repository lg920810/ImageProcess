#include "NostalgicEffect.h"

NostalgicEffect::NostalgicEffect()
{

}

NostalgicEffect::~NostalgicEffect()
{

}

AlgorithmType NostalgicEffect::GetType() const
{
	return type;
}

QString NostalgicEffect::GetName() const
{
	return name;
}

void NostalgicEffect::ProcessImage()
{
	QImage image = ImageHolder::GetInstance()->GetInitImage();
	cv::Mat src = QImage2cvMat(image);
	cv::cvtColor(src, src, CV_RGBA2RGB);
	cv::Mat dst(src.size(), CV_8UC3);
	cv::cvtColor(src, src, CV_BGR2GRAY); // 转为灰度图像
	cv::threshold(src, dst, 100, 255, CV_THRESH_BINARY);
	cv::cvtColor(dst, dst, CV_GRAY2RGB);
	/*cv::imshow("1", dst);
	cv::waitKey(30);
	for (int i = 0; i < src.rows; ++i){
	for (int j = 0; j < src.cols; ++j){
	dst.at<cv::Vec3b>(i, j)[0] = src.at<cv::Vec3b>(i, j)[0] * 0.272 + src.at<cv::Vec3b>(i, j)[1] * 0.534 + src.at<cv::Vec3b>(i, j)[2] * 0.131;
	dst.at<cv::Vec3b>(i, j)[1] = src.at<cv::Vec3b>(i, j)[0] * 0.349 + src.at<cv::Vec3b>(i, j)[1] * 0.686 + src.at<cv::Vec3b>(i, j)[2] * 0.168;
	dst.at<cv::Vec3b>(i, j)[2] = src.at<cv::Vec3b>(i, j)[0] * 0.393 + src.at<cv::Vec3b>(i, j)[1] * 0.769 + src.at<cv::Vec3b>(i, j)[2] * 0.189;

	if (dst.at<cv::Vec3b>(i, j)[0] > 255) dst.at<cv::Vec3b>(i, j)[0] = 255;
	if (dst.at<cv::Vec3b>(i, j)[0] < 0) dst.at<cv::Vec3b>(i, j)[0] = 0;
	if (dst.at<cv::Vec3b>(i, j)[1] > 255) dst.at<cv::Vec3b>(i, j)[1] = 255;
	if (dst.at<cv::Vec3b>(i, j)[1] < 0) dst.at<cv::Vec3b>(i, j)[1] = 0;
	if (dst.at<cv::Vec3b>(i, j)[2] > 255) dst.at<cv::Vec3b>(i, j)[2] = 255;
	if (dst.at<cv::Vec3b>(i, j)[2] < 0) dst.at<cv::Vec3b>(i, j)[2] = 0;
	}
	}*/
	image = cvMat2QImage(dst);
	ImageHolder::GetInstance()->SetImage(image);
}

QImage& NostalgicEffect::CreatThumbnail(QImage &initImage)
{
	initImage = ImageHolder::GetInstance()->GetImage().copy();
	cv::Mat src = QImage2cvMat(initImage);
	cv::pyrDown(src, src, cv::Size((src.cols) / 2, (src.rows) / 2));
	cv::cvtColor(src, src, CV_RGBA2RGB);
	cv::Mat dst(src.size(), CV_8UC3);
	cv::cvtColor(src, src, CV_BGR2GRAY); // 转为灰度图像
	cv::threshold(src, dst, 0, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);
	cv::cvtColor(dst, dst, CV_GRAY2RGB);
	/*for (int i = 0; i < src.rows; ++i){
		for (int j = 0; j < src.cols; ++j){
			dst.at<cv::Vec3b>(i, j)[0] = src.at<cv::Vec3b>(i, j)[0] * 0.272 + src.at<cv::Vec3b>(i, j)[1] * 0.534 + src.at<cv::Vec3b>(i, j)[2] * 0.131;
			dst.at<cv::Vec3b>(i, j)[1] = src.at<cv::Vec3b>(i, j)[0] * 0.349 + src.at<cv::Vec3b>(i, j)[1] * 0.686 + src.at<cv::Vec3b>(i, j)[2] * 0.168;
			dst.at<cv::Vec3b>(i, j)[2] = src.at<cv::Vec3b>(i, j)[0] * 0.393 + src.at<cv::Vec3b>(i, j)[1] * 0.769 + src.at<cv::Vec3b>(i, j)[2] * 0.189;

			if (dst.at<cv::Vec3b>(i, j)[0] > 255) dst.at<cv::Vec3b>(i, j)[0] = 255;
			if (dst.at<cv::Vec3b>(i, j)[0] < 0) dst.at<cv::Vec3b>(i, j)[0] = 0;
			if (dst.at<cv::Vec3b>(i, j)[1] > 255) dst.at<cv::Vec3b>(i, j)[1] = 255;
			if (dst.at<cv::Vec3b>(i, j)[1] < 0) dst.at<cv::Vec3b>(i, j)[1] = 0;
			if (dst.at<cv::Vec3b>(i, j)[2] > 255) dst.at<cv::Vec3b>(i, j)[2] = 255;
			if (dst.at<cv::Vec3b>(i, j)[2] < 0) dst.at<cv::Vec3b>(i, j)[2] = 0;
		}
	}*/
	initImage = cvMat2QImage(dst);
	return initImage;
}
