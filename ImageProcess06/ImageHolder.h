#ifndef LOADIMAGE_H
#define LOADIMAGE_H

#include <QObject>
#include <QImage>

class ImageHolder : public QObject
{
	Q_OBJECT

private:
	ImageHolder();
	
public:
	~ImageHolder();

	static ImageHolder* GetInstance()
	{
		static ImageHolder instance;   //局部静态变量  
		return &instance;
	}
	
	bool LoadImage(QString filePath);		//读取进来新图像要想算法管理器发信号
	void UpdateImage();						//一旦更新图像就向主窗口发送信号
	QImage& GetImage();
	QImage& GetInitImage();
	void SetImage(QImage &image);

signals:
	emit void sendImage(QImage&);

private:
	QImage nMainImage;
	QImage nCurImage;
};

#endif // LOADIMAGE_H
