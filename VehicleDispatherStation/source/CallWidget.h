#pragma once

#include <QWidget>
#include "ui_CallWidget.h"

class CCallWidget : public QFrame
{
	Q_OBJECT

public:
	CCallWidget(QWidget *parent = Q_NULLPTR);
	~CCallWidget();

private slots:
	void Slot_BtnVoicePressed();
	void Slot_BtnVoiceReleased();

private:
	void Init();
	void InitGUI();
	void InitConnect();


private:
	Ui::CCallWidget ui;

	bool m_bBtnVoicePressed = false;
};
