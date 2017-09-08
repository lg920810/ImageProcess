#ifndef THUMBNAILWIDGET_H
#define THUMBNAILWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "AlgorithmMrg.h"
#include "Thumbnail.h"

class ThumbnailWidget : public QWidget
{
	Q_OBJECT

public:
	ThumbnailWidget(AlgorithmMrg* mpAlgMrg, QWidget *parent);
	~ThumbnailWidget();

private:
	AlgorithmMrg* mpAlgMrg;
	QGridLayout *gridlayout;
};

#endif // THUMBNAILWIDGET_H
