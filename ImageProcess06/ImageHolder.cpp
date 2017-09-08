#include "ImageHolder.h"
#include <QMessageBox>
#include <QImageReader>

ImageHolder::ImageHolder()
{

}

ImageHolder::~ImageHolder()
{

}

bool ImageHolder::LoadImage(QString filePath)
{
	QImageReader reader(filePath);
	reader.setAutoTransform(true);
	nMainImage = reader.read();
	if (nMainImage.isNull())
	{
		return false;
	}
	else
	{
		nCurImage = nMainImage.copy();
		nMainImage.convertToFormat(QImage::Format_RGB32);
		nCurImage.convertToFormat(QImage::Format_RGB32);
		return true;
	}
}

void ImageHolder::UpdateImage()
{
	emit sendImage(nCurImage);		//一旦更新图像要通知主页面
}

QImage& ImageHolder::GetImage()
{
	return nCurImage;
}

QImage& ImageHolder::GetInitImage()
{
	return nMainImage;
}

void ImageHolder::SetImage(QImage &image)
{
	nCurImage = image;
}

