#include "LogEventWidget.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QHeaderView>
#include <QDateTime>

CLogEventWidget::CLogEventWidget(QWidget *parent)
	: QWidget(parent)
{
	Init();
}

CLogEventWidget::~CLogEventWidget()
{
}

void CLogEventWidget::Initalize(const QList<EventLogInfo>& lstEventLogInfo)
{
	UpdateTable(lstEventLogInfo);
}

void CLogEventWidget::Slot_ItemDbClicked(QTableWidgetItem *item)
{
	int a = 9;
}

void CLogEventWidget::Init()
{
	InitGUI();
	InitConnect();
}

void CLogEventWidget::InitGUI()
{
	m_pLayout = new QVBoxLayout(this);
	m_pLayout->setMargin(0);
	this->setLayout(m_pLayout);
	m_pLogEventTable = new QTableWidget(this);
	m_pLogEventTable->setSelectionMode(QAbstractItemView::SingleSelection);
	m_pLogEventTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	m_pLogEventTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
	connect(m_pLogEventTable, &QTableWidget::itemDoubleClicked, this, &CLogEventWidget::Slot_ItemDbClicked);
	m_pLayout->addWidget(m_pLogEventTable);

	m_pLogEventTable->setColumnCount(3);
	m_pLogEventTable->setAlternatingRowColors(true);
	m_pLogEventTable->horizontalHeader()->setStretchLastSection(true);
	QStringList lstHeader;
	lstHeader << QStringLiteral("×´Ì¬") << QStringLiteral("Ê±¼ä")
		<< QStringLiteral("ÄÚÈÝ");
	m_pLogEventTable->setHorizontalHeaderLabels(lstHeader);
	m_pLogEventTable->setColumnWidth(0, 200);
	m_pLogEventTable->setColumnWidth(1, 200);
	m_pLogEventTable->setColumnWidth(2, 200);
}

void CLogEventWidget::InitConnect()
{

}

void CLogEventWidget::UpdateTable(const QList<EventLogInfo>& lstEventLogInfo)
{
	if (nullptr == m_pLogEventTable)
	{
		return;
	}

	foreach(EventLogInfo stEventLogInfo, lstEventLogInfo)
	{
		int nRow = m_pLogEventTable->rowCount();
		int nColumn = 0;
		m_pLogEventTable->insertRow(nRow);

		QTableWidgetItem* pItem = new QTableWidgetItem(stEventLogInfo.strLogStatus);
		m_pLogEventTable->setItem(nRow, nColumn++, pItem);
		QDateTime date;
		date.setMSecsSinceEpoch(stEventLogInfo.lLogTime);
		pItem = new QTableWidgetItem(date.time().toString("hh:mm:ss"));
		m_pLogEventTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stEventLogInfo.strLogContent);
		m_pLogEventTable->setItem(nRow, nColumn++, pItem);
	}
}
