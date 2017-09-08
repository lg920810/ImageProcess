#include "ImageProcess06.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ImageProcess06 w;
	w.resize(1024, 768);
	w.show();
	return a.exec();
}
