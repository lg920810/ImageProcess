#ifndef FILMTAB_H
#define FILMTAB_H

#include <QWidget>
#include "AlgorithmMrg.h"
#include "ThumbnailWidget.h"
#include <QStackedWidget>

class FilmTab : public QWidget
{
	Q_OBJECT

public:
	FilmTab(AlgorithmMrg* mpAlgMrg, QWidget *parent);
	~FilmTab();

private slots:
	void RecieveType(AlgorithmType);
	void RecieveCancel();
	void RecieveOK();

private:
	QStackedWidget* stackWidget;
	AlgorithmMrg* mpAlgMrg;
	ThumbnailWidget* thumbnailWidget;
};

#endif // FILMTAB_H
