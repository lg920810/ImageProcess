#include "NostalgicEffectProperty.h"

const int defaultValue = 100;

NostalgicEffectProperty::NostalgicEffectProperty()
{
	ui.setupUi(this);
	ui.contrastLabel->setText(QString::number(defaultValue));
	ui.contrastSlider->setRange(0, 255);
	ui.contrastSlider->setValue(defaultValue);

	connect(ui.contrastSlider, SIGNAL(valueChanged(int)), this, SLOT(ContrastChanged(int)));
	connect(ui.buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()), this, SLOT(OnCancel()));
	connect(ui.buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked()), this, SLOT(OnOK()));
	connect(ui.resetBtn, SIGNAL(clicked()), this, SLOT(OnResetBtn()));
}

NostalgicEffectProperty::~NostalgicEffectProperty()
{

}

AlgorithmType NostalgicEffectProperty::GetType() const
{
	return type;
}

QString NostalgicEffectProperty::GetName() const
{
	return name;
}

void NostalgicEffectProperty::ContrastChanged(int alpha)
{
	ui.contrastLabel->setText(QString::number(alpha));
	QImage image = ImageHolder::GetInstance()->GetInitImage();
	cv::Mat src = Algorithm::QImage2cvMat(image);
	cv::cvtColor(src, src, CV_RGBA2RGB);
	cv::Mat dst(src.size(), CV_8UC3);
	cv::cvtColor(src, src, CV_BGR2GRAY); // 转为灰度图像
	cv::threshold(src, dst, alpha, 255, CV_THRESH_BINARY);
	cv::cvtColor(dst, dst, CV_GRAY2RGB);

	image = Algorithm::cvMat2QImage(dst);
	ImageHolder::GetInstance()->SetImage(image);
	ImageHolder::GetInstance()->UpdateImage();
}

void NostalgicEffectProperty::OnCancel()
{
	OnResetBtn();
	emit SendCancel();
}

void NostalgicEffectProperty::OnOK()
{
	emit SendOK();
}

void NostalgicEffectProperty::OnResetBtn()
{
	ui.contrastLabel->setText(QString::number(defaultValue));
	ui.contrastSlider->setValue(defaultValue);
	QImage image = ImageHolder::GetInstance()->GetInitImage();
	cv::Mat src = Algorithm::QImage2cvMat(image);
	cv::cvtColor(src, src, CV_RGBA2RGB);
	cv::Mat dst(src.size(), CV_8UC3);
	cv::cvtColor(src, src, CV_BGR2GRAY); // 转为灰度图像
	cv::threshold(src, dst, defaultValue, 255, CV_THRESH_BINARY);
	cv::cvtColor(dst, dst, CV_GRAY2RGB);
	image = Algorithm::cvMat2QImage(dst);
	ImageHolder::GetInstance()->SetImage(image);
	ImageHolder::GetInstance()->UpdateImage();
}

