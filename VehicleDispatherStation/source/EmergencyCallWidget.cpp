#include "EmergencyCallWidget.h"
#include <QTableWidgetItem>
#include <QDateTime>
#include <QMenu>

CEmergencyCallWidget::CEmergencyCallWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

CEmergencyCallWidget::~CEmergencyCallWidget()
{
}

void CEmergencyCallWidget::Initalize(const QList<EmergentCall>& lstEmergentCallInfo)
{
	UpdateTabel(lstEmergentCallInfo);
}

void CEmergencyCallWidget::Slot_ItemPressed(const QModelIndex &index)
{
	if (nullptr == m_pMenu)
	{
		return;
	}
	if (Qt::RightButton != QApplication::mouseButtons())
	{
		return;
	}

	QAction* pAction = m_pMenu->exec(QCursor::pos());
	if (pAction == m_pActionOk)		//确定
	{
		// TODO
	}
	else if (pAction == m_pActionStop)// 结束
	{
		int nRow = index.row();
		// TODO
	}
	else if (pAction == m_pActionDele)// 删除
	{
		int nRow = index.row();
		// TODO
	}
	else if (pAction == m_pActionClear)// 清空
	{
		// TODO
	}
}

void CEmergencyCallWidget::Init()
{
	InitGUI();
	InitConnect();
}

void CEmergencyCallWidget::InitGUI()
{
	m_pMenu = new QMenu(this);
	m_pActionOk = new QAction(QStringLiteral("确认"));
	m_pActionStop = new QAction(QStringLiteral("结束"));
	m_pActionDele = new QAction(QStringLiteral("删除"));
	m_pActionClear = new QAction(QStringLiteral("清空"));
	m_pMenu->addAction(m_pActionOk);
	m_pMenu->addSeparator();
	m_pMenu->addAction(m_pActionStop);
	m_pMenu->addAction(m_pActionDele);
	m_pMenu->addAction(m_pActionClear);

	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void CEmergencyCallWidget::InitConnect()
{
	connect(ui.tableWidget, &QTableWidget::pressed, this, &CEmergencyCallWidget::Slot_ItemPressed);
}
void CEmergencyCallWidget::UpdateTabel(const QList<EmergentCall>& lstEmergentCallInfo)
{
	for each (EmergentCall var in lstEmergentCallInfo)
	{
		int nColumn = 0;
		int nRow = ui.tableWidget->rowCount();
		ui.tableWidget->insertRow(nRow);
		QDateTime dateTime;
		dateTime.setMSecsSinceEpoch(var.lTime);
		QTableWidgetItem* pItem = new QTableWidgetItem(dateTime.time().toString("hh:mm:ss"));
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(var.strGroupName);
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(var.strRadioName);
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(var.strRadioID);
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(var.strStatus);
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
	}
}
