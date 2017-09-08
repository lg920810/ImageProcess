#include "ComicEffectProperty.h"
#include <QDebug>

ComicEffectProperty::ComicEffectProperty()
{	
	ui.setupUi(this);
	connect(ui.contrastSlider, SIGNAL(valueChanged(int)), this, SLOT(ContrastChanged(int)));
	connect(ui.buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()), this, SLOT(OnCancel()));

	connect(ui.buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked()), this, SLOT(OnOK()));
	connect(ui.resetBtn, SIGNAL(clicked()), this, SLOT(OnResetBtn()));
}

ComicEffectProperty::~ComicEffectProperty()
{

}

AlgorithmType ComicEffectProperty::GetType() const
{
	return type;
}

QString ComicEffectProperty::GetName() const
{
	return name;
}

void ComicEffectProperty::ContrastChanged(int alpha)
{
	ui.contrastLabel->setText(QString::number(alpha));
	//cv::Mat src = ImageProcess03::QImage2cvMat(ImageProcess03::GetMainImage());
	////cv::imshow("1", src);

	//cv::cvtColor(src, src, CV_RGBA2RGB);
	//cv::Mat dst(src.size(), CV_8UC3);
	//if (src.empty()){
	//	std::cout << "read image failure" << std::endl;
	//}
	//for (int i = 0; i < src.rows; ++i)
	//	for (int j = 0; j < src.cols; ++j)
	//		for (int k = 0; k < 3; ++k)
	//			dst.at<cv::Vec3b>(i, j)[k] = cv::saturate_cast<uchar>(src.at<cv::Vec3b>(i, j)[k] * (alpha + 100) / 100.0);

	//ImageProcess03::GetMainImage() = ImageProcess03::cvMat2QImage(dst);
	
}

void ComicEffectProperty::OnCancel()
{
	OnResetBtn();
	emit SendCancel();
}

void ComicEffectProperty::OnOK()
{
	emit SendOK();
}

void ComicEffectProperty::OnResetBtn()
{
}
