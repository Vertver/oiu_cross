#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_oiu_crossqt.h"
#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QDebug>
#include <QComboBox>
#include <QStatusBar>
#include <QtGui>
class oiu_crossqt : public QMainWindow
{
	Q_OBJECT

	//private:
	//QLabel* _DeviceStatus;

public:
	oiu_crossqt(QWidget *parent = Q_NULLPTR);

private:
	Ui::oiu_crossqtClass ui;
	//oiu_crossqt(QWidget * parent);
};

struct DeviceInfo	// Get info about audio device
{
	int         index;
	QString     name;
	QString     details;
	bool        is_default_input;
	bool        is_default_output;
};
class TestA3MW : public QWidget
{
	Q_OBJECT

public:
	TestA3MW(QWidget* parent = NULL);
	~TestA3MW();

	//void setPortAudioContext(ScopedPAContext* pactx);
	void getDeviceInfo();

	public slots:
	//void streamButton();
	//void updateDetails(int i);
	//void refreshDevices();

	//void QMainWindow::createStatusBar();

private:
	QList<DeviceInfo>   _devices;

	//ScopedPAContext*    _pactx;

	QTextEdit*          textfield;
	QPushButton*        pushbutton, *refreshbutton;
	QGridLayout*        mainlayout;
	QComboBox*          devicecombo;
};




