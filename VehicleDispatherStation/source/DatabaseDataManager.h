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

	QList<StationInfo> m_lstStationInfo;				// վ����Ϣ
	QList<TrainInfo> m_lstTrainInfo;					// �г���
	QList<UserGroupInfo> m_lstUserGroupInfo;			// �û����
	QList<RecallReqeust> m_lstRecallRequestInfo;		// �غ������
	QList<EmergentCall> m_lstEmergentCallInfo;			// �������м�¼��
	QList<EventLogInfo> m_lstEventLogInfo;				// ʱ����־��
	QList<CallRecordInfo> m_lstCallRecordInfo;			// �����¼��
	QList<RadioStatus> m_lstRadioStatusInfo;			// ��̨״̬��
};
