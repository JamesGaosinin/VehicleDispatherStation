#include "CallBackRequestWidget.h"
#include <QTableWidgetItem>
#include <QDateTime>
#include <QMenu>

CCallBackRequestWidget::CCallBackRequestWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init();
}

CCallBackRequestWidget::~CCallBackRequestWidget()
{
}

void CCallBackRequestWidget::Initalize(const QList<RecallReqeust>& lstRecallRequestInfo)
{
	UpdateTabel(lstRecallRequestInfo);
}

void CCallBackRequestWidget::Slot_ItemPressed(const QModelIndex &index)
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
	if (pAction == m_pActionOk)		//ȷ��
	{
		// TODO
	}
	else if (pAction == m_pActionDele)// ɾ��
	{
		int nRow = index.row();
		// TODO
	}
	else if (pAction == m_pActionClear)// ���
	{
		// TODO
	}
}

void CCallBackRequestWidget::Init()
{
	InitGUI();
	InitConnect();
}

void CCallBackRequestWidget::InitGUI()
{
	m_pMenu = new QMenu(this);
	m_pActionOk = new QAction(QStringLiteral("ȷ��"));
	m_pActionDele = new QAction(QStringLiteral("ɾ��"));
	m_pActionClear = new QAction(QStringLiteral("���"));
	m_pMenu->addAction(m_pActionOk);
	m_pMenu->addSeparator();
	m_pMenu->addAction(m_pActionDele);
	m_pMenu->addAction(m_pActionClear);

	ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
	ui.tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
	ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void CCallBackRequestWidget::InitConnect()
{
	connect(ui.tableWidget, &QTableWidget::pressed, this, &CCallBackRequestWidget::Slot_ItemPressed);
}

void CCallBackRequestWidget::UpdateTabel(const QList<RecallReqeust>& lstRecallRequestInfo)
{
	for each (RecallReqeust var in lstRecallRequestInfo)
	{
		int nColumn = 0;
		int nRow = ui.tableWidget->rowCount();
		ui.tableWidget->insertRow(nRow);
		QDateTime dateTime;
		dateTime.setMSecsSinceEpoch(var.lTime);
		QTableWidgetItem* pItem = new QTableWidgetItem(dateTime.time().toString("hh:mm:ss"));
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(var.strRadioName);
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(var.strStationName);
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(var.TrainNo);
		ui.tableWidget->setItem(nRow, nColumn++, pItem);
	}
}
