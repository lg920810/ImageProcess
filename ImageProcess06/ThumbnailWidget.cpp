#include "ThumbnailWidget.h"
#include <QDebug>

namespace Details
{
	static const qint32 TOTAL_COL_COUNT = 2;
}

ThumbnailWidget::ThumbnailWidget(AlgorithmMrg* pAlgMrg, QWidget *parent)
	: QWidget(parent)
{
	this->mpAlgMrg = pAlgMrg;
	gridlayout = new QGridLayout();
	gridlayout->setSpacing(10);
	gridlayout->setMargin(10);

	for (qint32 i = 0; i < mpAlgMrg->mAlgorithmVec.size(); ++i) {
		Algorithm* alg = mpAlgMrg->mAlgorithmVec[i];
		Thumbnail* thumbnail = new Thumbnail(alg, parent);
		gridlayout->addWidget(thumbnail, (i / Details::TOTAL_COL_COUNT), (i % Details::TOTAL_COL_COUNT));
	}
	setLayout(gridlayout);
}

ThumbnailWidget::~ThumbnailWidget()
{

}
