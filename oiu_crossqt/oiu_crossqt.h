#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_oiu_crossqt.h"

class oiu_crossqt : public QMainWindow
{
	Q_OBJECT

public:
	oiu_crossqt(QWidget *parent = Q_NULLPTR);

private:
	Ui::oiu_crossqtClass ui;
};
