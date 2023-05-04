#pragma once

#include <QWidget>
#include "CommanHead.h"

class QTableWidget;
class QVBoxLayout;
class QTableWidgetItem;

class CLogEventWidget : public QWidget
{
	Q_OBJECT

public:
	CLogEventWidget(QWidget *parent);
	~CLogEventWidget();

	void Initalize(const QList<EventLogInfo>& lstEventLogInfo);

private slots:
	void Slot_ItemDbClicked(QTableWidgetItem *item);

private:
	void Init();
	void InitGUI();
	void InitConnect();

	void UpdateTable(const QList<EventLogInfo>& lstEventLogInfo);

private:
	QVBoxLayout* m_pLayout = nullptr;
	QTableWidget* m_pLogEventTable = nullptr;
};
