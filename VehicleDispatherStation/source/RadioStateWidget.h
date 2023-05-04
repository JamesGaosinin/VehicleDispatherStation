#pragma once

#include <QWidget>
#include "CommanHead.h"

class QTableWidget;
class QVBoxLayout;
class QTableWidgetItem;

class CRadioStateWidget : public QWidget
{
	Q_OBJECT

public:
	CRadioStateWidget(QWidget *parent);
	~CRadioStateWidget();

	void Initalize(const QList<RadioStatus>& lstRadioStatusInfo);

private slots:
	void Slot_ItemDbClicked(QTableWidgetItem *item);

private:
	void Init();
	void InitGUI();
	void InitConnect();

	void UpdateTabel(const QList<RadioStatus>& lstRadioStatusInfo);

private:
	QVBoxLayout* m_pLayout = nullptr;
	QTableWidget* m_pRadioStateTable = nullptr;
};
