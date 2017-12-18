#include "oiu_crossqt.h"
#include "ui_oiu_crossqt.h"
#include "portaudio.h"
#include <QStatusBar>
#include <QAction>
#include <QtCore>
#include <QtGui>
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	oiu_crossqt w;
	w.show();
	return a.exec();
}

// Main Code



