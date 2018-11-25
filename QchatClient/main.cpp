#include "QchatClient.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QchatClient w;
	w.show();
	return a.exec();
}
