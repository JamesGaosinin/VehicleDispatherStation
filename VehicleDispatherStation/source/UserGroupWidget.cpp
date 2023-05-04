#include "UserGroupWidget.h"
#include <QTableWidgetItem>
#include <QHBoxLayout>
#include <QTableWidget>
#include <QHeaderView>

CUserGroupWidget::CUserGroupWidget(QWidget *parent)
	: QWidget(parent)
{
	Init();
}

CUserGroupWidget::~CUserGroupWidget()
{
}

void CUserGroupWidget::Initalize(const QList<UserGroupInfo>& lstUserGroupInfo)
{
	foreach(UserGroupInfo stUserGroupInfo, lstUserGroupInfo)
	{
		int nRow = m_pUserGroupTable->rowCount();
		int nColumn = 0;
		m_pUserGroupTable->insertRow(nRow);

		QTableWidgetItem* pItem = new QTableWidgetItem(stUserGroupInfo.strGroupName);
		m_pUserGroupTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stUserGroupInfo.strGroupID);
		m_pUserGroupTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stUserGroupInfo.strListeningStatus);
		m_pUserGroupTable->setItem(nRow, nColumn++, pItem);
	}
}

void CUserGroupWidget::Slot_ItemDbClicked(QTableWidgetItem *item)
{

}

void CUserGroupWidget::Init()
{
	InitGUI();
	InitConnect();
}

void CUserGroupWidget::InitGUI()
{
	m_pLayout = new QVBoxLayout(this);
	m_pLayout->setMargin(0);
	this->setLayout(m_pLayout);
	m_pUserGroupTable = new QTableWidget(this);
	m_pUserGroupTable->setSelectionMode(QAbstractItemView::SingleSelection);
	m_pUserGroupTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	m_pUserGroupTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
	connect(m_pUserGroupTable, &QTableWidget::itemDoubleClicked, this, &CUserGroupWidget::Slot_ItemDbClicked);
	m_pLayout->addWidget(m_pUserGroupTable);

	m_pUserGroupTable->setColumnCount(3);
	m_pUserGroupTable->setAlternatingRowColors(true);
	m_pUserGroupTable->horizontalHeader()->setStretchLastSection(true);
	QStringList lstHeader;
	lstHeader << QStringLiteral("通话组名称") << QStringLiteral("通话组ID") << QStringLiteral("监听状态");
	m_pUserGroupTable->setHorizontalHeaderLabels(lstHeader);
	m_pUserGroupTable->setColumnWidth(0, 300);
	m_pUserGroupTable->setColumnWidth(1, 300);
	m_pUserGroupTable->setColumnWidth(2, 200);
}

void CUserGroupWidget::InitConnect()
{

}

