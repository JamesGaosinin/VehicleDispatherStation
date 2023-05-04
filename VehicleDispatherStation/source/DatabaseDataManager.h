#pragma once

#include <QObject>
#include "CommanHead.h"

class CDatabaseDataManager : public QObject
{
	Q_OBJECT

public:
	CDatabaseDataManager(QObject *parent = nullptr);
	~CDatabaseDataManager();
	static CDatabaseDataManager* GetInstance();
	static void Release();

	QList<TrainInfo>& GetTrainInfo();
	QList<StationInfo>& GetStationInfo();

public slots:
	void Slot_TrainInfoReply(const QList<TrainInfo>& lstTrainInfo);
	void Slot_UserGroupInfoReply(const QList<UserGroupInfo>& lstUserGroupInfo);
	void Slot_EventLogInfoReply(const QList<EventLogInfo>& lstEventLogInfo);
	void Slot_CallRecordInfoReply(const QList<CallRecordInfo>& lstCallRecordInfo);
	void Slot_RadioStatusInfoReply(const QList<RadioStatus>& lstRadioStatusInfo);
	void Slot_RecallReqeustInfoReply(const QList<RecallReqeust>& lstRecallRequestInfo);
	void Slot_EmergentCallInfoReply(const QList<EmergentCall>& lstEmergentCallInfo);
	void Slot_StationInfoReply(const QList<StationInfo>& lstStationInfo);

private:
	static CDatabaseDataManager* m_pInstance;

	QList<StationInfo> m_lstStationInfo;				// 站点信息
	QList<TrainInfo> m_lstTrainInfo;					// 列车表
	QList<UserGroupInfo> m_lstUserGroupInfo;			// 用户组表
	QList<RecallReqeust> m_lstRecallRequestInfo;		// 回呼请求表
	QList<EmergentCall> m_lstEmergentCallInfo;			// 紧急呼叫记录表
	QList<EventLogInfo> m_lstEventLogInfo;				// 时间日志表
	QList<CallRecordInfo> m_lstCallRecordInfo;			// 组呼记录表
	QList<RadioStatus> m_lstRadioStatusInfo;			// 电台状态表
};
