#include "ImageProcess06.h"

#include <QFileDialog>


ImageProcess06::ImageProcess06(QWidget *parent)
	: QWidget(parent)
{
	ImageHolder* mpImageHolder = ImageHolder::GetInstance();
	mpAlgMrg = new AlgorithmMrg(this);
	InitUi();
	connect(mpImageHolder, SIGNAL(sendImage(QImage&)), this, SLOT(receiveImage(QImage&)));
}

ImageProcess06::~ImageProcess06()
{

}

void ImageProcess06::InitUi()
{
	QPushButton* viewBtn = new QPushButton(QString::fromLocal8Bit("浏览图片"));
	connect(viewBtn, SIGNAL(clicked()), this, SLOT(OnOpenBtn()));

	QPushButton* openBtn = new QPushButton(QString::fromLocal8Bit("打开"));
	connect(openBtn, SIGNAL(clicked()), this, SLOT(OnOpenBtn()));

	QPushButton* saveBtn = new QPushButton(QString::fromLocal8Bit("保存"));
	connect(saveBtn, SIGNAL(clicked()), this, SLOT(OnSaveBtn()));

	QPushButton* saveAsBtn = new QPushButton(QString::fromLocal8Bit("另存"));
	connect(saveAsBtn, SIGNAL(clicked()), this, SLOT(OnSaveAsBtn()));

	QHBoxLayout *toolBarLayout = new QHBoxLayout();
	toolBarLayout->addWidget(viewBtn);
	toolBarLayout->addWidget(openBtn);
	toolBarLayout->addWidget(saveBtn);
	toolBarLayout->addWidget(saveAsBtn);
	toolBarLayout->addStretch();		// 添加伸缩
	toolBarLayout->setSpacing(0);	// 控件的间距

	QPushButton* fullScreenBtn = new QPushButton(QString::fromLocal8Bit("全屏"));
	connect(fullScreenBtn, SIGNAL(clicked()), this, SLOT(OnFullScreenBtn()));

	QPushButton* fitScreenBtn = new QPushButton(QString::fromLocal8Bit("适屏"));
	fitScreenBtn->setEnabled(true);
	connect(fitScreenBtn, SIGNAL(clicked()), this, SLOT(OnFitScreenBtn()));

	QPushButton* originalBtn = new QPushButton(QString::fromLocal8Bit("原大"));
	connect(originalBtn, SIGNAL(clicked()), this, SLOT(OnOriginalBtn()));

	QPushButton* comparisonBtn = new QPushButton(QString::fromLocal8Bit("对比"));
	connect(comparisonBtn, SIGNAL(clicked()), this, SLOT(OnComparisonBtn()));

	QPushButton* reDoBtn = new QPushButton(QString::fromLocal8Bit("重做"));
	connect(reDoBtn, SIGNAL(clicked()), this, SLOT(OnReDoBtn()));

	QPushButton* unDoBtn = new QPushButton(QString::fromLocal8Bit("还原"));
	connect(unDoBtn, SIGNAL(clicked()), this, SLOT(OnUnDoBtn()));

	QPushButton* zoomInBtn = new QPushButton("+");
	QPushButton* zoomOutBtn = new QPushButton("-");
	zoomInBtn->setFlat(true); //设置透明
	zoomOutBtn->setFlat(true);
	zoomInBtn->setFixedSize(20, 20);
	zoomOutBtn->setFixedSize(20, 20);

	QPushButton* resetBtn = new QPushButton(QString::fromLocal8Bit("重置"));
	resetBtn->setFixedSize(40, 20);
	zoomSlider = new QSlider(Qt::Horizontal);
	zoomSlider->setFixedSize(250, 20);
	zoomSlider->setRange(20, 200);
	zoomSlider->setValue(100);
	zoomSlider->setPageStep(10);

	QHBoxLayout* hLayout = new QHBoxLayout;
	hLayout->addWidget(zoomOutBtn);
	hLayout->addWidget(zoomSlider);
	hLayout->addWidget(zoomInBtn);
	hLayout->addWidget(resetBtn);
	connect(zoomSlider, SIGNAL(valueChanged(int)), this, SLOT(OnZoomBtn(int)));
	connect(zoomInBtn, SIGNAL(clicked()), this, SLOT(OnZoomInBtn()));
	connect(zoomOutBtn, SIGNAL(clicked()), this, SLOT(OnZoomOutBtn()));
	connect(resetBtn, SIGNAL(clicked()), this, SLOT(onResetBtn()));

	QHBoxLayout *bottomLayout = new QHBoxLayout();
	bottomLayout->addWidget(fullScreenBtn);
	bottomLayout->addWidget(fitScreenBtn);
	bottomLayout->addWidget(originalBtn);
	bottomLayout->addWidget(comparisonBtn);
	bottomLayout->addWidget(reDoBtn);
	bottomLayout->addWidget(unDoBtn);
	bottomLayout->addStretch();
	bottomLayout->addLayout(hLayout);

	nMainImageLabel = new QLabel();
	nMainImageLabel->setBackgroundRole(QPalette::Base);
	nMainImageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	nMainImageLabel->setScaledContents(true);

	nChangedImageLabel = new QLabel();
	nChangedImageLabel->setBackgroundRole(QPalette::Base);
	nChangedImageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	nChangedImageLabel->setScaledContents(true);

	QImage *originImg = new QImage("1.jpg");					//初始化一幅图像
	ImageHolder::GetInstance()->SetImage(*originImg);

	QVBoxLayout* leftLayout = new QVBoxLayout();
	QVBoxLayout* rightLayout = new QVBoxLayout();
	QTabWidget* tabWidget = new QTabWidget;
	pGenernalTab = new GenernalTab(this);
	pFilmTab = new FilmTab(mpAlgMrg, this);
	tabWidget->addTab(pGenernalTab, QString::fromLocal8Bit("基本调整"));
	tabWidget->addTab(pFilmTab, QString::fromLocal8Bit("数码暗房"));

	scrollArea = new QScrollArea;
	scrollArea->setBackgroundRole(QPalette::Dark);
	scrollArea->setWidget(nMainImageLabel);
	scrollArea->setAlignment(Qt::AlignCenter);

	contrastSrollArea = new QScrollArea;
	contrastSrollArea->setBackgroundRole(QPalette::Dark);
	contrastSrollArea->setWidget(nChangedImageLabel);
	contrastSrollArea->setAlignment(Qt::AlignCenter);

	leftLayout->removeWidget(scrollArea);
	QHBoxLayout* imgLayout = new QHBoxLayout;
	imgLayout->addWidget(scrollArea);
	imgLayout->addWidget(contrastSrollArea);
	contrastSrollArea->setVisible(false);

	leftLayout->addLayout(toolBarLayout);
	leftLayout->addLayout(imgLayout);
	rightLayout->addWidget(tabWidget);

	QHBoxLayout *hLayout1 = new QHBoxLayout();
	hLayout1->addLayout(leftLayout);
	hLayout1->addLayout(rightLayout);
	hLayout1->setStretchFactor(leftLayout, 3);
	hLayout1->setStretchFactor(rightLayout, 1);

	QVBoxLayout *vlayout = new QVBoxLayout();
	vlayout->addLayout(hLayout1);
	vlayout->addLayout(bottomLayout);
	setLayout(vlayout);
}

void ImageProcess06::OnOpenBtn()
{
	QString filePath = QFileDialog::getOpenFileName(this, tr("Open Image"), ".", tr("Image Files(*.jpg *.png)"));
	if (ImageHolder::GetInstance()->LoadImage(filePath))
	{
		ImageHolder::GetInstance()->UpdateImage();
	}
}

void ImageProcess06::receiveImage(QImage& image)
{
	nMainImageLabel->setPixmap(QPixmap::fromImage(image));
	nMainImageLabel->adjustSize();
}

