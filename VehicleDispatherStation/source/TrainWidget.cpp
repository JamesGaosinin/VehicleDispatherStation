#include "TrainWidget.h"
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QVBoxLayout>
#include <QHeaderView>

CTrainWidget::CTrainWidget(QWidget *parent)
	: QWidget(parent)
{
	Init();
}

CTrainWidget::~CTrainWidget()
{
}

void CTrainWidget::Initalize(const QList<TrainInfo>& lstTrainInfo)
{
	// TODO 传入数据
	QList<TrainInfo> lstTrainInfoTemp = lstTrainInfo;
	foreach(TrainInfo stTrainInfo, lstTrainInfoTemp)
	{
		int nRow = m_pTrainTable->rowCount();
		int nColumn = 0;
		m_pTrainTable->insertRow(nRow);


		QTableWidgetItem* pItem = new QTableWidgetItem(stTrainInfo.strTrainId);
		m_pTrainTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stTrainInfo.strTrainNo);
		m_pTrainTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stTrainInfo.strDriverNo);
		m_pTrainTable->setItem(nRow, nColumn++, pItem);
		pItem = new QTableWidgetItem(stTrainInfo.strPosition);
		m_pTrainTable->setItem(nRow, nColumn++, pItem);

		pItem = new QTableWidgetItem(stTrainInfo.nUpDownType ==0 ? QStringLiteral("上行") : QStringLiteral("下行"));
		m_pTrainTable->setItem(nRow, nColumn++, pItem);

		pItem = new QTableWidgetItem(stTrainInfo.nRadioHeadStatus == 0 ? QStringLiteral("关机") : QStringLiteral("开机"));
		m_pTrainTable->setItem(nRow, nColumn++, pItem);

		pItem = new QTableWidgetItem(stTrainInfo.nRadioTailStatus == 0 ? QStringLiteral("关机") : QStringLiteral("开机"));
		m_pTrainTable->setItem(nRow, nColumn++, pItem);

		pItem = new QTableWidgetItem(stTrainInfo.strGroupName);
		m_pTrainTable->setItem(nRow, nColumn++, pItem);

		pItem = new QTableWidgetItem(stTrainInfo.nListeningState == 0 ? QStringLiteral("") : QStringLiteral("副选监听"));
		m_pTrainTable->setItem(nRow, nColumn++, pItem);
	}
}

void CTrainWidget::Slot_ItemDbClicked(QTableWidgetItem *item)
{
	int a = 0;
}

void CTrainWidget::Init()
{
	InitGUI();
	InitConnect();
}

void CTrainWidget::InitGUI()
{
	m_pLayout = new QVBoxLayout(this);
	m_pLayout->setMargin(0);
	this->setLayout(m_pLayout);
	m_pTrainTable = new QTableWidget(this);
	m_pTrainTable->setSelectionMode(QAbstractItemView::SingleSelection);
	m_pTrainTable->setSelectionBehavior(QAbstractItemView::SelectRows);
	m_pTrainTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
	connect(m_pTrainTable, &QTableWidget::itemDoubleClicked, this, &CTrainWidget::Slot_ItemDbClicked);
	m_pLayout->addWidget(m_pTrainTable);

	m_pTrainTable->setColumnCount(9);
	m_pTrainTable->setAlternatingRowColors(true);
	m_pTrainTable->horizontalHeader()->setStretchLastSection(true);
	QStringList lstHeader;
	lstHeader << QStringLiteral("车组号") << QStringLiteral("车次号") << QStringLiteral("司机号")
		<< QStringLiteral("位置") << QStringLiteral("上/下行") << QStringLiteral("车头电台")
		<< QStringLiteral("车尾电台") << QStringLiteral("通话组") << QStringLiteral("监听状态");
	m_pTrainTable->setHorizontalHeaderLabels(lstHeader);
}

void CTrainWidget::InitConnect()
{

}
