#pragma once

#include <QWidget>
#include "ui_CCallBackRequestWidget.h"
#include "CommanHead.h"

class QTableWidgetItem;
class QMenu;
class QAction;

class CCallBackRequestWidget : public QWidget
{
	Q_OBJECT

public:
	CCallBackRequestWidget(QWidget *parent = Q_NULLPTR);
	~CCallBackRequestWidget();

	void Initalize(const QList<RecallReqeust>& lstRecallRequestInfo);

private slots:
	void Slot_ItemPressed(const QModelIndex &index);

private:
	void Init();
	void InitGUI();
	void InitConnect();
	void UpdateTabel(const QList<RecallReqeust>& lstRecallRequestInfo);

private:
	Ui::CCallBackRequestWidget ui;

	QMenu* m_pMenu = nullptr;
	QAction* m_pActionOk = nullptr;
	QAction* m_pActionDele = nullptr;
	QAction* m_pActionClear = nullptr;
};
