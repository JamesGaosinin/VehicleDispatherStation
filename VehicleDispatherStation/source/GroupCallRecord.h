#pragma once

#include <QWidget>
#include "CommanHead.h"

class QTableWidget;
class QVBoxLayout;
class QTableWidgetItem;

class CGroupCallRecord : public QWidget
{
	Q_OBJECT

public:
	CGroupCallRecord(QWidget *parent);
	~CGroupCallRecord();

	void Initalize(const QList<CallRecordInfo>& lstCallRecord);

private slots:
	void Slot_ItemDbClicked(QTableWidgetItem *item);

private:
	void Init();
	void InitGUI();
	void InitConnect();

private:
	QVBoxLayout* m_pLayout = nullptr;
	QTableWidget* m_pRecordTable = nullptr;
};
