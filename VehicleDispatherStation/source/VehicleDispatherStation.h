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

	QAction* m_pActionOption = nullptr;			// 操作按钮
	QAction* m_pActionView = nullptr;			// 视图按钮
	QAction* m_pActionHelp = nullptr;			// 帮助按钮
	QMenu* m_pMenuOption = nullptr;				// 操作菜单
	QMenu* m_pMenuView = nullptr;				// 视图菜单
	QMenu* m_pMenuHelp = nullptr;				// 帮助菜单

	QAction* m_pActionLogout = nullptr;			// 注销按钮
	QAction* m_pActionLog = nullptr;			// 日志按钮
	QAction* m_pActionCall = nullptr;			// 个呼按钮
	QAction* m_pActionMsg = nullptr;			// 短信按钮
	QAction* m_pActionRadio = nullptr;			// 电台按钮
	QAction* m_pActionOwn = nullptr;			// 归属按钮
	QAction* m_pActionRebuild = nullptr;		// 重组按钮
	QAction* m_pActionAbout = nullptr;			// 关于按钮
	QAction* m_pActionHelp2 = nullptr;			// 帮助按钮
	QAction* m_pActionQuit = nullptr;			// 退出按钮

	QAction* m_pActionToolBar;					// 工具栏
	QAction* m_pActionStatusBar;				// 状态栏

	QAction* m_pActionEventLog;					// 事件日志
	QAction* m_pActionGroupRecord;				// 组呼记录
	QAction* m_pActionRadioState;				// 电台状态
	QAction* m_pActionRecall;					// 回呼请求
	QAction* m_pActionEmergentCall;				// 紧急告警
	QAction* m_pActionTrainTable;				// 列车列表
	QAction* m_pActionGraphics;					// 图形显示
	QAction* m_pAction_UserGroup;				// 用 户 组

	CFunctionStateWidget* m_pStateWgt = nullptr;// 功能状态显示

	// 客户区1
	CTrainWidget* m_pTrainWgt = nullptr;		// 列车列表
	CGraphicsWidget* m_pGraphicsWgt = nullptr;	// 图形显示
	CUserGroupWidget* m_pUserGroupWgt = nullptr;// 用户组
	// 客户区2
	CCallBackRequestWidget* m_pCallBackRequestWgt = nullptr;// 回呼请求
	QTabWidget* m_pSeveralSeleWgt = nullptr;	// 多选派接菜单
	CEmergencyCallWidget* m_pCEmergencyCallWgt = nullptr;// 紧急呼叫
	// 客户区3
	CGroupCallRecord* m_pCGroupCallWgt = nullptr;// 组呼记录
	CLogEventWidget* m_pLogEventWgt = nullptr;	// 事件日志
	CRadioStateWidget* m_pRadioStateWgt = nullptr;// 电台状态

	CDataBaseManagement* m_pDbManagement = nullptr;// 数据库管理
};
