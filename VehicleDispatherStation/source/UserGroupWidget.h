#pragma once

#include <QWidget>
#include "CommanHead.h"

class QVBoxLayout;
class QTableWidget;
class QTableWidgetItem;

class CUserGroupWidget : public QWidget
{
	Q_OBJECT

public:
	CUserGroupWidget(QWidget *parent);
	~CUserGroupWidget();
	void Initalize(const QList<UserGroupInfo>& lstUserGroupInfo);

private slots:
	void Slot_ItemDbClicked(QTableWidgetItem *item);

private:
	void Init();
	void InitGUI();
	void InitConnect();

private:
	QVBoxLayout* m_pLayout = nullptr;
	QTableWidget* m_pUserGroupTable = nullptr;
};
