#pragma once

#include <QWidget>
#include "ui_FunctionStateWidget.h"

class CFunctionStateWidget : public QWidget
{
	Q_OBJECT

public:
	CFunctionStateWidget(QWidget *parent = Q_NULLPTR);
	~CFunctionStateWidget();

private slots:
	void Slot_TimeChanged();

private:
	void Init();
	void InitGUI();
	void InitConnect();
	void InitTimer();


private:
	Ui::CFunctionStateWidget ui;
};
