#include "Thumbnail.h"
#include <QDebug>
Thumbnail::Thumbnail(Algorithm *alg, QWidget *parent)
	: QToolButton(parent)
{
	m_alg = alg;
	this->setFixedSize(100, 120);
	this->setText(m_alg->GetName());
	mThumbnail = m_alg->CreatThumbnail(mThumbnail);
	this->setIcon(QIcon(QPixmap::fromImage(m_alg->CreatThumbnail(mThumbnail))));
	this->setIconSize(QSize(100, 100));
	this->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

	connect(this, SIGNAL(clicked()), this, SLOT(OnClicked()));
	connect(this, SIGNAL(SendType(AlgorithmType)), parentWidget(), SLOT(RecieveType(AlgorithmType)));
}

Thumbnail::~Thumbnail()
{

}

void Thumbnail::SetThumbnail(QImage& image)
{
	mThumbnail = image;
}

void Thumbnail::OnClicked()
{
	if (ImageHolder::GetInstance()->GetInitImage().isNull())
	{
		return;
	}
	m_alg->ProcessImage();
	ImageHolder::GetInstance()->UpdateImage();
	emit SendType(m_alg->GetType());
}



