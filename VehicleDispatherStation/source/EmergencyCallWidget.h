#pragma once

#include <QWidget>
#include "ui_EmergencyCallWidget.h"
#include "CommanHead.h"

class QTableWidgetItem;
class QMenu;
class QAction;

class CEmergencyCallWidget : public QWidget
{
	Q_OBJECT

public:
	CEmergencyCallWidget(QWidget *parent = Q_NULLPTR);
	~CEmergencyCallWidget();

	void Initalize(const QList<EmergentCall>& lstEmergentCallInfo);

private slots:
	void Slot_ItemPressed(const QModelIndex &index);

private:
	void Init();
	void InitGUI();
	void InitConnect();
	void UpdateTabel(const QList<EmergentCall>& lstEmergentCallInfo);


private:
	Ui::CEmergencyCallWidget ui;

	QMenu* m_pMenu = nullptr;
	QAction* m_pActionOk = nullptr;
	QAction* m_pActionStop = nullptr;
	QAction* m_pActionDele = nullptr;
	QAction* m_pActionClear = nullptr;
};
