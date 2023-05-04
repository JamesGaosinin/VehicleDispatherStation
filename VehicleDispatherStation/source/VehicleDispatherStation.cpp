#include "VehicleDispatherStation.h"
#include <QList>
#include <QTimer>
#include <QTime>
#include <QFile>
#include <QLabel>
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
#include "TrainWidget.h"
#include "GraphicsWidget.h"
#include "UserGroupWidget.h"
#include "GroupCallRecord.h"
#include "LogEventWidget.h"
#include "RadioStateWidget.h"
#include "CallBackRequestWidget.h"
#include "EmergencyCallWidget.h"
#include "FunctionStateWidget.h"
#include "DataBaseManagement.h"
#include "SeveralSeleChildWidget.h"
#include "DatabaseDataManager.h"

CVehicleDispatherStation::CVehicleDispatherStation(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	Init();
}

void CVehicleDispatherStation::Slot_QuitClicked()
{
	QMessageBox box(this);
	box.setWindowTitle(QStringLiteral("��ʾ"));
	box.setText(QStringLiteral("�˳������"));
	box.setButtonText(0, QStringLiteral("�˳�"));
	box.setButtonText(0, QStringLiteral("ȡ��"));
	QPushButton* pBtnOk = new QPushButton(QStringLiteral("�˳�"), this);
	QPushButton* pBtnCancel = new QPushButton(QStringLiteral("ȡ��"), this);
	box.addButton(pBtnOk, QMessageBox::AcceptRole);
	box.addButton(pBtnCancel, QMessageBox::RejectRole);
	if (QMessageBox::AcceptRole == box.exec())
	{
		qApp->quit();
	}
}

void CVehicleDispatherStation::Slot_ActionTriggered(bool bTiggered)
{
	QObject* pObj = sender();
	if (pObj == m_pActionTrainTable)
	{
		if (!bTiggered)
		{
			int nIndex = ui.tabWidget_1->indexOf(m_pTrainWgt);
			ui.tabWidget_1->removeTab(nIndex);
		}
		else
		{
			ui.tabWidget_1->addTab(m_pTrainWgt, QIcon(":/img/Train.png"), QStringLiteral("�г��б�"));
		}
	}
	else if (pObj == m_pActionGraphics)
	{
		if (!bTiggered)
		{
			int nIndex = ui.tabWidget_1->indexOf(m_pGraphicsWgt);
			ui.tabWidget_1->removeTab(nIndex);
		}
		else
		{
			ui.tabWidget_1->addTab(m_pGraphicsWgt, QIcon(":/img/Graphics.png"), QStringLiteral("ͼ����ʾ"));
		}
	}
	else if (pObj == m_pAction_UserGroup)
	{
		if (!bTiggered)
		{
			int nIndex = ui.tabWidget_1->indexOf(m_pUserGroupWgt);
			ui.tabWidget_1->removeTab(nIndex);
		}
		else
		{
			ui.tabWidget_1->addTab(m_pUserGroupWgt, QIcon(":/img/Image.png"), QStringLiteral("�û���"));
		}
	}
	else if (pObj == m_pActionRecall)
	{
		if (!bTiggered)
		{
			int nIndex = ui.tabWidget_2->indexOf(m_pCallBackRequestWgt);
			ui.tabWidget_2->removeTab(nIndex);
		}
		else
		{
			ui.tabWidget_2->addTab(m_pCallBackRequestWgt, QIcon(":/img/Lighting.png"), QStringLiteral("�غ�����"));
		}
	}
	else if (pObj == m_pActionEmergentCall)
	{
		if (!bTiggered)
		{
			int nIndex = ui.tabWidget_2->indexOf(m_pCEmergencyCallWgt);
			ui.tabWidget_2->removeTab(nIndex);
		}
		else
		{
			ui.tabWidget_2->addTab(m_pCEmergencyCallWgt, QIcon(":/img/Lighting.png"), QStringLiteral("��������"));
		}
	}
	else if (pObj == m_pActionEventLog)
	{
		if (!bTiggered)
		{
			int nIndex = ui.tabWidget_3->indexOf(m_pLogEventWgt);
			ui.tabWidget_3->removeTab(nIndex);
		}
		else
		{
			ui.tabWidget_3->addTab(m_pLogEventWgt, QIcon(":/img/Log.png"), QStringLiteral("�¼���־"));
		}
	}
	else if (pObj == m_pActionGroupRecord)
	{
		if (!bTiggered)
		{
			int nIndex = ui.tabWidget_3->indexOf(m_pCGroupCallWgt);
			ui.tabWidget_3->removeTab(nIndex);
		}
		else
		{
			ui.tabWidget_3->addTab(m_pCGroupCallWgt, QIcon(":/img/Lighting.png"), QStringLiteral("�����¼"));
		}
	}
	else if (pObj == m_pActionRadioState)
	{
		if (!bTiggered)
		{
			int nIndex = ui.tabWidget_3->indexOf(m_pRadioStateWgt);
			ui.tabWidget_3->removeTab(nIndex);
		}
		else
		{
			ui.tabWidget_3->addTab(m_pRadioStateWgt, QIcon(":/img/Radio.png"), QStringLiteral("��̨״̬"));
		}
	}
	// ״̬��
	else if (pObj == m_pActionStatusBar)
	{
		ui.statusBar->setVisible(bTiggered);
	}
	// ������
	else if (pObj == m_pActionToolBar)
	{
		ui.mainToolBar->setVisible(bTiggered);
	}
}

void CVehicleDispatherStation::Slot_TrainInfoReply(const QList<TrainInfo>& lstTrainInfo)
{
	if (nullptr != m_pTrainWgt)
	{
		m_pTrainWgt->Initalize(lstTrainInfo);
	}
}

void CVehicleDispatherStation::Slot_UserGroupInfoReply(const QList<UserGroupInfo>& lstUserGroupInfo)
{
	if (nullptr != m_pUserGroupWgt)
	{
		m_pUserGroupWgt->Initalize(lstUserGroupInfo);
	}
}

void CVehicleDispatherStation::Slot_EventLogInfoReply(const QList<EventLogInfo>& lstEventLogInfo)
{
	if (nullptr != m_pLogEventWgt)
	{
		m_pLogEventWgt->Initalize(lstEventLogInfo);
	}
}

void CVehicleDispatherStation::Slot_CallRecordInfoReply(const QList<CallRecordInfo>& lstCallRecordInfo)
{
	if (nullptr != m_pCGroupCallWgt)
	{
		m_pCGroupCallWgt->Initalize(lstCallRecordInfo);
	}
}

void CVehicleDispatherStation::Slot_RadioStatusInfoReply(const QList<RadioStatus>& lstRadioStatusInfo)
{
	if (nullptr != m_pRadioStateWgt)
	{
		m_pRadioStateWgt->Initalize(lstRadioStatusInfo);
	}
}

void CVehicleDispatherStation::Slot_RecallReqeustInfoReply(const QList<RecallReqeust>& lstRecallRequestInfo)
{
	if (nullptr != m_pCallBackRequestWgt)
	{
		m_pCallBackRequestWgt->Initalize(lstRecallRequestInfo);
	}
}

void CVehicleDispatherStation::Slot_EmergentCallInfoReply(const QList<EmergentCall>& lstEmergentCallInfo)
{
	if (nullptr != m_pCEmergencyCallWgt)
	{
		m_pCEmergencyCallWgt->Initalize(lstEmergentCallInfo);
	}
}

void CVehicleDispatherStation::Slot_StationInfoReply(const QList<StationInfo>& lstStationInfo)
{
	int a = 0;
}

void CVehicleDispatherStation::Init()
{
	InitStyleSheet();
	InitData();
	InitGUI();
	InitConnect();

	InitDataBase();
}

void CVehicleDispatherStation::InitData()
{
	// TODO
}

void CVehicleDispatherStation::InitStyleSheet()
{
	QFile file(":/StyleSheet.qss");
	if (!file.exists())
	{
		return;
	}
	if (!file.open(QIODevice::ReadOnly))
	{
		return;
	}
	QByteArray arr = file.readAll();
	setStyleSheet(arr);
	file.close();
}

void CVehicleDispatherStation::InitGUI()
{
	setWindowTitle(QStringLiteral("�г�����̨"));
	setWindowIcon(QIcon(":/img/Icon.png"));
	InitMenuBar();
	InitToolBar();
	InitStatusBar();
	InitCenterWgt();

	InitChildWidget();
}

void CVehicleDispatherStation::InitMenuBar()
{
	m_pMenuOption = new QMenu(this);
	m_pMenuOption->addAction(QIcon(":/img/Msg.png"), QStringLiteral("��¼/ע��(L)"));
	m_pMenuOption->addAction(QIcon(":/img/Msg.png"), QStringLiteral("��     ��(P)"));
	m_pMenuOption->addAction(QIcon(":/img/Msg.png"), QStringLiteral("�绰����(B)"));
	m_pMenuOption->addAction(QIcon(":/img/Msg.png"), QStringLiteral("��ѡ/�ɽ�(T)"));
	m_pMenuOption->addAction(QIcon(":/img/Msg.png"), QStringLiteral("��  ��  Ϣ(M)"));
	m_pMenuOption->addAction(QIcon(":/img/Msg.png"), QStringLiteral("�ֶ�ת��(E)"));
	m_pMenuOption->addAction(QIcon(":/img/Msg.png"), QStringLiteral("��̬����(D)"));
	m_pMenuOption->addSeparator();
	m_pMenuOption->addAction(QIcon(":/img/Msg.png"), QStringLiteral("�˳�(X)"));
	m_pActionOption = ui.menuBar->addMenu(m_pMenuOption);
	m_pActionOption->setText(QStringLiteral("����(O)"));

	m_pMenuView = new QMenu(this);
	m_pActionToolBar = m_pMenuView->addAction(QStringLiteral("������(T)"));
	m_pActionStatusBar = m_pMenuView->addAction(QStringLiteral("״̬��(S)"));
	m_pActionToolBar->setCheckable(true);
	m_pActionToolBar->setChecked(true);
	m_pActionStatusBar->setCheckable(true);
	m_pActionStatusBar->setChecked(true);
	m_pMenuView->addSeparator();
	m_pActionEventLog = m_pMenuView->addAction(QIcon(":/img/Log.png"), QStringLiteral("�¼���־(I)"));
	m_pActionGroupRecord = m_pMenuView->addAction(QIcon(":/img/Lighting.png"), QStringLiteral("�����¼(P)"));
	m_pActionRadioState = m_pMenuView->addAction(QIcon(":/img/Radio.png"), QStringLiteral("��̨״̬(Z)"));
	m_pMenuView->addSeparator();
	m_pActionRecall = m_pMenuView->addAction(QIcon(":/img/Lighting.png"), QStringLiteral("�غ�����(R)"));
	m_pActionEmergentCall = m_pMenuView->addAction(QIcon(":/img/Lighting.png"), QStringLiteral("�����澯(G)"));
	m_pMenuView->addSeparator();
	m_pActionTrainTable = m_pMenuView->addAction(QIcon(":/img/Train.png"), QStringLiteral("�г��б�(L)"));
	m_pActionGraphics = m_pMenuView->addAction(QIcon(":/img/Graphics.png"), QStringLiteral("ͼ����ʾ(G)"));
	m_pAction_UserGroup = m_pMenuView->addAction(QIcon(":/img/Image.png"), QStringLiteral("�� �� ��(U)"));
	m_pActionEventLog->setCheckable(true);
	m_pActionGroupRecord->setCheckable(true);
	m_pActionRadioState->setCheckable(true);
	m_pActionRecall->setCheckable(true);
	m_pActionEmergentCall->setCheckable(true);
	m_pActionTrainTable->setCheckable(true);
	m_pActionGraphics->setCheckable(true);
	m_pAction_UserGroup->setCheckable(true);

	m_pActionEventLog->setChecked(true);
	m_pActionGroupRecord->setChecked(true);
	m_pActionRadioState->setChecked(true);
	m_pActionRecall->setChecked(true);
	m_pActionEmergentCall->setChecked(true);
	m_pActionTrainTable->setChecked(true);
	m_pActionGraphics->setChecked(true);
	m_pAction_UserGroup->setChecked(true);

	m_pActionView = ui.menuBar->addMenu(m_pMenuView);
	m_pActionView->setText(QStringLiteral("��ͼ(V)"));

	m_pMenuHelp = new QMenu(this);
	m_pMenuHelp->addAction(QIcon(":/img/Msg.png"), QStringLiteral("����DPH(A)"));
	m_pMenuHelp->addAction(QIcon(":/img/Msg.png"), QStringLiteral("����(H)"));
	m_pActionHelp = ui.menuBar->addMenu(m_pMenuHelp);
	m_pActionHelp->setText(QStringLiteral("����(H)"));
}

void CVehicleDispatherStation::InitToolBar()
{
	m_pActionLogout = ui.mainToolBar->addAction(QIcon(":/img/Msg.png"), QStringLiteral("ע��"));
	m_pActionLog = ui.mainToolBar->addAction(QIcon(":/img/Log.png"), QStringLiteral("��־"));
	m_pActionCall = ui.mainToolBar->addAction(QIcon(":/img/Msg.png"), QStringLiteral("����"));
	m_pActionMsg = ui.mainToolBar->addAction(QIcon(":/img/Msg.png"), QStringLiteral("����"));
	m_pActionRadio = ui.mainToolBar->addAction(QIcon(":/img/Radio.png"), QStringLiteral("��̨"));
	m_pActionOwn = ui.mainToolBar->addAction(QIcon(":/img/Msg.png"), QStringLiteral("����"));
	m_pActionRebuild = ui.mainToolBar->addAction(QIcon(":/img/Msg.png"), QStringLiteral("����"));
	m_pActionAbout = ui.mainToolBar->addAction(QIcon(":/img/About.png"), QStringLiteral("����"));
	m_pActionHelp2 = ui.mainToolBar->addAction(QIcon(":/img/Help.png"), QStringLiteral("����"));
	m_pActionQuit = ui.mainToolBar->addAction(QIcon(":/img/Quit.png"), QStringLiteral("�˳�"));

	m_pActionLog->setCheckable(true);
	m_pActionCall->setCheckable(true);
	m_pActionMsg->setCheckable(true);
	m_pActionRadio->setCheckable(true);
	m_pActionOwn->setCheckable(true);
	m_pActionRebuild->setCheckable(true);
	m_pActionAbout->setCheckable(true);
	m_pActionHelp2->setCheckable(true);

	ui.mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
	ui.mainToolBar->setMovable(false);

	QLabel* pWidget = new QLabel();
	pWidget->setSizePolicy(QSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed));
	ui.mainToolBar->addWidget(pWidget);
	// TODO
	m_pStateWgt = new CFunctionStateWidget(this);
	ui.mainToolBar->addWidget(m_pStateWgt);
}

void CVehicleDispatherStation::InitStatusBar()
{
	QLabel* pLabel = new QLabel(QStringLiteral("����̨���"));
	ui.statusBar->addWidget(pLabel);
}

void CVehicleDispatherStation::InitCenterWgt()
{
	QList<int> list;
	list << 300 << 100;
	ui.splitter_UD->setSizes(list);
	list.clear();
	list << 200 << 100;
	ui.splitter->setSizes(list);

	QSizePolicy tableSizePolicy = ui.frame_L->sizePolicy();
	tableSizePolicy.setHorizontalStretch(8);
	ui.frame_L->setSizePolicy(tableSizePolicy);

	tableSizePolicy = ui.frame_R->sizePolicy();
	tableSizePolicy.setHorizontalStretch(1);
	ui.frame_R->setSizePolicy(tableSizePolicy);

	QSizePolicy sizePolicy = ui.Client_2->sizePolicy();
	sizePolicy.setVerticalStretch(1);
	ui.Client_2->setSizePolicy(tableSizePolicy);
	sizePolicy = ui.Client_4->sizePolicy();
	sizePolicy.setVerticalStretch(1);
	ui.Client_4->setSizePolicy(tableSizePolicy);
}

void CVehicleDispatherStation::InitChildWidget()
{
	// �ͻ���1
	m_pTrainWgt = new CTrainWidget(this);
	ui.tabWidget_1->addTab(m_pTrainWgt, QIcon(":/img/Train.png"), QStringLiteral("�г��б�"));
	m_pGraphicsWgt = new CGraphicsWidget(this);
	ui.tabWidget_1->addTab(m_pGraphicsWgt, QIcon(":/img/Graphics.png"), QStringLiteral("ͼ����ʾ"));
	m_pUserGroupWgt = new CUserGroupWidget(this);
	ui.tabWidget_1->addTab(m_pUserGroupWgt, QIcon(":/img/Image.png"), QStringLiteral("�û���"));
	// �ͻ���2
	m_pCallBackRequestWgt = new CCallBackRequestWidget(this);
	ui.tabWidget_2->addTab(m_pCallBackRequestWgt, QIcon(":/img/Lighting.png"), QStringLiteral("�غ�����"));
	m_pCEmergencyCallWgt = new CEmergencyCallWidget(this);
	ui.tabWidget_2->addTab(m_pCEmergencyCallWgt, QIcon(":/img/Lighting.png"), QStringLiteral("��������"));
	m_pSeveralSeleWgt = new QTabWidget(this);
	ui.tabWidget_2->addTab(m_pSeveralSeleWgt, QIcon(":/img/Lighting.png"), QStringLiteral("��ѡ/�ɽ�"));
	CSeveralSeleChildWidget* pWidget = new CSeveralSeleChildWidget(QStringLiteral("���Զ�ѡ/�ɽ�"), this);
	m_pSeveralSeleWgt->addTab(pWidget, pWidget->GetTabName());
	// �ͻ���3
	m_pLogEventWgt = new CLogEventWidget(this);
	ui.tabWidget_3->addTab(m_pLogEventWgt, QIcon(":/img/Log.png"), QStringLiteral("�¼���־"));
	m_pCGroupCallWgt = new CGroupCallRecord(this);
	ui.tabWidget_3->addTab(m_pCGroupCallWgt, QIcon(":/img/Lighting.png"), QStringLiteral("�����¼"));
	m_pRadioStateWgt = new CRadioStateWidget(this);
	ui.tabWidget_3->addTab(m_pRadioStateWgt, QIcon(":/img/Radio.png"), QStringLiteral("��̨״̬"));

	connect(m_pActionEventLog, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pActionGroupRecord, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pActionRadioState, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pActionRecall, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pActionEmergentCall, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pActionTrainTable, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pActionGraphics, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pAction_UserGroup, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pActionToolBar, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
	connect(m_pActionStatusBar, &QAction::triggered, this, &CVehicleDispatherStation::Slot_ActionTriggered);
}

void CVehicleDispatherStation::InitConnect()
{
	connect(m_pActionQuit, &QAction::triggered, this, &CVehicleDispatherStation::Slot_QuitClicked);
}

void CVehicleDispatherStation::InitDataBase()
{
	m_pDbManagement = new CDataBaseManagement(this);
	DBConfig stDBConfig;

	QString strFilePath = QApplication::applicationDirPath() + ("/Config/DataBaseConfig.xml");
	if (!m_pDbManagement->Initalize(strFilePath))
	{
		QMessageBox::information(this, QStringLiteral("��ʾ"), QStringLiteral("���ݿ��ʼ��ʧ�ܣ�"));
		return;
	}
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryTrainInfoFinished, this, &CVehicleDispatherStation::Slot_TrainInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryUserGroupInfoFinished, this, &CVehicleDispatherStation::Slot_UserGroupInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryEventLogInfoFinished, this, &CVehicleDispatherStation::Slot_EventLogInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryCallRecordInfoFinished, this, &CVehicleDispatherStation::Slot_CallRecordInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryRadioStatusInfoFinished, this, &CVehicleDispatherStation::Slot_RadioStatusInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryRecallReqeustInfoFinished, this, &CVehicleDispatherStation::Slot_RecallReqeustInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryEmergentCallInfoFinished, this, &CVehicleDispatherStation::Slot_EmergentCallInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryStationInfoFinished, this, &CVehicleDispatherStation::Slot_StationInfoReply, Qt::QueuedConnection);
	// ���ݿ�����ݹ���
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryTrainInfoFinished, CDatabaseDataManager::GetInstance(), &CDatabaseDataManager::Slot_TrainInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryUserGroupInfoFinished, CDatabaseDataManager::GetInstance(), &CDatabaseDataManager::Slot_UserGroupInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryEventLogInfoFinished, CDatabaseDataManager::GetInstance(), &CDatabaseDataManager::Slot_EventLogInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryCallRecordInfoFinished, CDatabaseDataManager::GetInstance(), &CDatabaseDataManager::Slot_CallRecordInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryRadioStatusInfoFinished, CDatabaseDataManager::GetInstance(), &CDatabaseDataManager::Slot_RadioStatusInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryRecallReqeustInfoFinished, CDatabaseDataManager::GetInstance(), &CDatabaseDataManager::Slot_RecallReqeustInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryEmergentCallInfoFinished, CDatabaseDataManager::GetInstance(), &CDatabaseDataManager::Slot_EmergentCallInfoReply, Qt::QueuedConnection);
	connect(m_pDbManagement, &CDataBaseManagement::Sig_QueryStationInfoFinished, CDatabaseDataManager::GetInstance(), &CDatabaseDataManager::Slot_StationInfoReply, Qt::QueuedConnection);

	m_pDbManagement->Query(E_Query_Type_TrainInfo, "select* from [VehicleDispather].[dbo].[TrainInfo];");
	m_pDbManagement->Query(E_Query_Type_UserGroup, "select* from [VehicleDispather].[dbo].[UserGroup];");
	m_pDbManagement->Query(E_Query_Type_EventLog, "select* from [VehicleDispather].[dbo].[EventLog];");
	m_pDbManagement->Query(E_Query_Type_CallRecord, "select* from [VehicleDispather].[dbo].[CallRecord];");
	m_pDbManagement->Query(E_Query_Type_RadioStatus, "select* from [VehicleDispather].[dbo].[RadioStatus];");
	m_pDbManagement->Query(E_Query_Type_RecallRequest, "select* from [VehicleDispather].[dbo].[RecallRequest];");
	m_pDbManagement->Query(E_Query_Type_EmergentCall, "select* from [VehicleDispather].[dbo].[EmergentCall];");
	m_pDbManagement->Query(E_Query_Type_Station, "select* from [VehicleDispather].[dbo].[StationConfig];");
}
