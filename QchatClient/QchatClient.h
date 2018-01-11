#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QchatClient.h"

class QchatClient : public QMainWindow
{
	Q_OBJECT

public:
	QchatClient(QWidget *parent = Q_NULLPTR);

private:
	Ui::QchatClientClass ui;
};
