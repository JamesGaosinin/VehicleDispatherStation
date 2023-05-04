#include "GroupCallRecord.h"
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QHeaderView>
#include <QDateTime>

CGroupCallRecord::CGroupCallRecord(QWidget *parent)
	: QWidget(parent)
{
	Init();
}

CGroupCallRecord::~CGroupCallRecord()
{
}

void CGroupCallRecord::Initalize(const QList<CallRecordInfo>& lstCallRecord)
{
	foreach(CallRecordInfo stCallRecordInfo, lstCallRecord)
	{
		int nRow = m_pRecordTable->rowCount();
		int nColumn = 0;
		m_pRecordTable->insertRow(nRow);

		QDateTime date;
		date.setMSecsSinceEpoch(stCallRecordInfo.lRecordTime);
		QTableWidgetItem* pItem = new QTableWidgetItem(date.time().toString("hh:mm:ss"));
		m_pRecordTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stCallRecordInfo.strGroupName);
		m_pRecordTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stCallRecordInfo.strRadioName);
		m_pRecordTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stCallRecordInfo.strRadioId);
		m_pRecordTable->setItem(nRow, nColumn++, pItem);
	}
}

void CGroupCallRecord::Slot_ItemDbClicked(QTableWidgetItem *item)
{
	int a = 0;
}

void CGroupCallRecord::Init()
{
	InitGUI();
	InitConnect();
}

void CGroupCallRecord::InitGUI()
{
	m_pLayout = new QVBoxLayout(this);
	m_pLayout->setMargin(0);
	this->setLayout(m_pLayout);
	m_pRecordTable = new QTableWidget(this);
	m_pRecordTable->setSelectionMode(QAbstractItemView::SingleSelection);
	m_pRecordTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	m_pRecordTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
	connect(m_pRecordTable, &QTableWidget::itemDoubleClicked, this, &CGroupCallRecord::Slot_ItemDbClicked);
	m_pLayout->addWidget(m_pRecordTable);

	m_pRecordTable->setColumnCount(4);
	m_pRecordTable->setAlternatingRowColors(true);
	m_pRecordTable->horizontalHeader()->setStretchLastSection(true);
	QStringList lstHeader;
	lstHeader << QStringLiteral("时间") << QStringLiteral("通话组") << QStringLiteral("电台")
		<< QStringLiteral("电台ID");
	m_pRecordTable->setHorizontalHeaderLabels(lstHeader);
	m_pRecordTable->setColumnWidth(0, 200);
	m_pRecordTable->setColumnWidth(1, 200);
	m_pRecordTable->setColumnWidth(2, 200);
	m_pRecordTable->setColumnWidth(0, 200);
}

void CGroupCallRecord::InitConnect()
{

}
