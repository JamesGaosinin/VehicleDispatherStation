#include "RadioStateWidget.h"
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QHeaderView>

CRadioStateWidget::CRadioStateWidget(QWidget *parent)
	: QWidget(parent)
{
	Init();
}

CRadioStateWidget::~CRadioStateWidget()
{
}

void CRadioStateWidget::Initalize(const QList<RadioStatus>& lstRadioStatusInfo)
{
	// TODO 传入数据
	UpdateTabel(lstRadioStatusInfo);
}

void CRadioStateWidget::Slot_ItemDbClicked(QTableWidgetItem *item)
{
	int a = 0;
}

void CRadioStateWidget::Init()
{
	InitGUI();
	InitConnect();
}

void CRadioStateWidget::InitGUI()
{
	m_pLayout = new QVBoxLayout(this);
	m_pLayout->setMargin(0);
	this->setLayout(m_pLayout);
	m_pRadioStateTable = new QTableWidget(this);
	m_pRadioStateTable->setSelectionMode(QAbstractItemView::SingleSelection);
	m_pRadioStateTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	m_pRadioStateTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
	connect(m_pRadioStateTable, &QTableWidget::itemDoubleClicked, this, &CRadioStateWidget::Slot_ItemDbClicked);
	m_pLayout->addWidget(m_pRadioStateTable);

	m_pRadioStateTable->setColumnCount(6);
	m_pRadioStateTable->setAlternatingRowColors(true);
	m_pRadioStateTable->horizontalHeader()->setStretchLastSection(true);
	QStringList lstHeader;
	lstHeader << QStringLiteral("电台名称") << QStringLiteral("电台ID")<< QStringLiteral("电台类型")
		<< QStringLiteral("状态") << QStringLiteral("守候通话组") << QStringLiteral("注册基站");
	m_pRadioStateTable->setHorizontalHeaderLabels(lstHeader);
	m_pRadioStateTable->setColumnWidth(0, 200);
	m_pRadioStateTable->setColumnWidth(1, 100);
	m_pRadioStateTable->setColumnWidth(2, 200);
	m_pRadioStateTable->setColumnWidth(3, 100);
	m_pRadioStateTable->setColumnWidth(4, 200);
}

void CRadioStateWidget::InitConnect()
{

}

void CRadioStateWidget::UpdateTabel(const QList<RadioStatus>& lstRadioStatusInfo)
{

	if (nullptr == m_pRadioStateTable)
	{
		return;
	}

	foreach(RadioStatus stRadioStatusInfo, lstRadioStatusInfo)
	{
		int nRow = m_pRadioStateTable->rowCount();
		int nColumn = 0;
		m_pRadioStateTable->insertRow(nRow);

		QTableWidgetItem* pItem = new QTableWidgetItem(stRadioStatusInfo.strRadioName);
		m_pRadioStateTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stRadioStatusInfo.strRadioID);
		m_pRadioStateTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stRadioStatusInfo.strRadioType);
		m_pRadioStateTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stRadioStatusInfo.strRadioState);
		m_pRadioStateTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stRadioStatusInfo.strGuardCommGroup);
		m_pRadioStateTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stRadioStatusInfo.strRegistStation);
		m_pRadioStateTable->setItem(nRow, nColumn++, pItem);
	}
}