#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_VehicleDispatherStation.h"
#include "CommanHead.h"

class QAction;
class CFunctionStateWidget;
class CTrainWidget;
class CGraphicsWidget;
class CUserGroupWidget;
class CGroupCallRecord;
class CLogEventWidget;
class CRadioStateWidget;
class CCallBackRequestWidget;
class QTabWidget;
class CEmergencyCallWidget;
class CDataBaseManagement;

class CVehicleDispatherStation : public QMainWindow
{
	Q_OBJECT

public:
	struct DBConfig
	{
		QString m_strDriver;
		QString m_strHost;
		QString m_strDatabaseName; 
		QString m_strAccount;
		QString m_strPassword;
		int m_nPort;
	};

public:
	CVehicleDispatherStation(QWidget *parent = Q_NULLPTR);

private slots:
	void Slot_QuitClicked();
	void Slot_ActionTriggered(bool bTiggered);
	void Slot_TrainInfoReply(const QList<TrainInfo>& lstTrainInfo);
	void Slot_UserGroupInfoReply(const QList<UserGroupInfo>& lstUserGroupInfo);
	void Slot_EventLogInfoReply(const QList<EventLogInfo>& lstEventLogInfo);
	void Slot_CallRecordInfoReply(const QList<CallRecordInfo>& lstCallRecordInfo);
	void Slot_RadioStatusInfoReply(const QList<RadioStatus>& lstRadioStatusInfo);
	void Slot_RecallReqeustInfoReply(const QList<RecallReqeust>& lstRecallRequestInfo);
	void Slot_EmergentCallInfoReply(const QList<EmergentCall>& lstEmergentCallInfo);
	void Slot_StationInfoReply(const QList<StationInfo>& lstStationInfo);

private:
	void Init();
	void InitData();
	void InitStyleSheet();
	void InitGUI();
	void InitMenuBar();
	void InitToolBar();
	void InitStatusBar();
	void InitCenterWgt();
	void InitChildWidget();
	void InitConnect();
	void InitDataBase();

private:
	Ui::CVehicleDispatherStationClass ui;

	QAction* m_pActionOption = nullptr;			// ������ť
	QAction* m_pActionView = nullptr;			// ��ͼ��ť
	QAction* m_pActionHelp = nullptr;			// ������ť
	QMenu* m_pMenuOption = nullptr;				// �����˵�
	QMenu* m_pMenuView = nullptr;				// ��ͼ�˵�
	QMenu* m_pMenuHelp = nullptr;				// �����˵�

	QAction* m_pActionLogout = nullptr;			// ע����ť
	QAction* m_pActionLog = nullptr;			// ��־��ť
	QAction* m_pActionCall = nullptr;			// ������ť
	QAction* m_pActionMsg = nullptr;			// ���Ű�ť
	QAction* m_pActionRadio = nullptr;			// ��̨��ť
	QAction* m_pActionOwn = nullptr;			// ������ť
	QAction* m_pActionRebuild = nullptr;		// ���鰴ť
	QAction* m_pActionAbout = nullptr;			// ���ڰ�ť
	QAction* m_pActionHelp2 = nullptr;			// ������ť
	QAction* m_pActionQuit = nullptr;			// �˳���ť

	QAction* m_pActionToolBar;					// ������
	QAction* m_pActionStatusBar;				// ״̬��

	QAction* m_pActionEventLog;					// �¼���־
	QAction* m_pActionGroupRecord;				// �����¼
	QAction* m_pActionRadioState;				// ��̨״̬
	QAction* m_pActionRecall;					// �غ�����
	QAction* m_pActionEmergentCall;				// �����澯
	QAction* m_pActionTrainTable;				// �г��б�
	QAction* m_pActionGraphics;					// ͼ����ʾ
	QAction* m_pAction_UserGroup;				// �� �� ��

	CFunctionStateWidget* m_pStateWgt = nullptr;// ����״̬��ʾ

	// �ͻ���1
	CTrainWidget* m_pTrainWgt = nullptr;		// �г��б�
	CGraphicsWidget* m_pGraphicsWgt = nullptr;	// ͼ����ʾ
	CUserGroupWidget* m_pUserGroupWgt = nullptr;// �û���
	// �ͻ���2
	CCallBackRequestWidget* m_pCallBackRequestWgt = nullptr;// �غ�����
	QTabWidget* m_pSeveralSeleWgt = nullptr;	// ��ѡ�ɽӲ˵�
	CEmergencyCallWidget* m_pCEmergencyCallWgt = nullptr;// ��������
	// �ͻ���3
	CGroupCallRecord* m_pCGroupCallWgt = nullptr;// �����¼
	CLogEventWidget* m_pLogEventWgt = nullptr;	// �¼���־
	CRadioStateWidget* m_pRadioStateWgt = nullptr;// ��̨״̬

	CDataBaseManagement* m_pDbManagement = nullptr;// ���ݿ����
};
