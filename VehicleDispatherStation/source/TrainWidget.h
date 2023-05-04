#pragma once

#include <QWidget>
#include "CommanHead.h"

class QTableWidget;
class QVBoxLayout;
class QTableWidgetItem;

class CTrainWidget : public QWidget
{
	Q_OBJECT

public:
	CTrainWidget(QWidget *parent);
	~CTrainWidget();

	void Initalize(const QList<TrainInfo>& lstTrainInfo);

private slots:
	void Slot_ItemDbClicked(QTableWidgetItem *item);

private:
	void Init();
	void InitGUI();
	void InitConnect();

private:
	QVBoxLayout* m_pLayout = nullptr;
	QTableWidget* m_pTrainTable = nullptr;
};
