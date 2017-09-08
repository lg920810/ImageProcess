#include "FilmTab.h"

FilmTab::FilmTab(AlgorithmMrg* pAlgMrg,QWidget *parent)
	: QWidget(parent)
{
	this->mpAlgMrg = pAlgMrg;
	thumbnailWidget = new ThumbnailWidget(mpAlgMrg, this);
	stackWidget = new QStackedWidget(this);
	stackWidget->addWidget(thumbnailWidget);

	QMapIterator<AlgorithmType, AlgorithmProperty*> it(mpAlgMrg->mAlgorithmPropertyVec);
	while (it.hasNext()) {
		it.next();
		stackWidget->addWidget(it.value());
		connect(it.value(), SIGNAL(SendCancel()), this, SLOT(RecieveCancel()));
		connect(it.value(), SIGNAL(SendOK()), this, SLOT(RecieveOK()));
	}
}

FilmTab::~FilmTab()
{

}

void FilmTab::RecieveType(AlgorithmType type)
{
	QMapIterator<AlgorithmType, AlgorithmProperty*> it(mpAlgMrg->mAlgorithmPropertyVec);
	while (it.hasNext()) {
		it.next();
		if (it.key() == type) {
			stackWidget->setCurrentWidget(it.value());
		}
		else {
			//qDebug() << "not find" << endl;
		}
	}
}

void FilmTab::RecieveCancel()
{
	stackWidget->setCurrentWidget(thumbnailWidget);
}

void FilmTab::RecieveOK()
{
	stackWidget->setCurrentWidget(thumbnailWidget);
}
