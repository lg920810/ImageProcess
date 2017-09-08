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
		static ImageHolder instance;   //�ֲ���̬����  
		return &instance;
	}
	
	bool LoadImage(QString filePath);		//��ȡ������ͼ��Ҫ���㷨���������ź�
	void UpdateImage();						//һ������ͼ����������ڷ����ź�
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
