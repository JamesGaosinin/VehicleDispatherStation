#include "DatabaseDataManager.h"

CDatabaseDataManager* CDatabaseDataManager::m_pInstance = nullptr;

CDatabaseDataManager::CDatabaseDataManager(QObject *parent)
	: QObject(parent)
{
}

CDatabaseDataManager::~CDatabaseDataManager()
{
}

CDatabaseDataManager* CDatabaseDataManager::GetInstance()
{
	if (nullptr == m_pInstance)
	{
		m_pInstance = new CDatabaseDataManager;
	}

	return m_pInstance;
}

void CDatabaseDataManager::Release()
{
	if (nullptr != m_pInstance)
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
}

QList<TrainInfo>& CDatabaseDataManager::GetTrainInfo()
{
	return m_lstTrainInfo;
}

QList<StationInfo>& CDatabaseDataManager::GetStationInfo()
{
	return m_lstStationInfo;
}

void CDatabaseDataManager::Slot_TrainInfoReply(const QList<TrainInfo>& lstTrainInfo)
{
	m_lstTrainInfo = lstTrainInfo;
}

void CDatabaseDataManager::Slot_UserGroupInfoReply(const QList<UserGroupInfo>& lstUserGroupInfo)
{
	m_lstUserGroupInfo = lstUserGroupInfo;
}

void CDatabaseDataManager::Slot_EventLogInfoReply(const QList<EventLogInfo>& lstEventLogInfo)
{
	m_lstEventLogInfo = lstEventLogInfo;
}

void CDatabaseDataManager::Slot_CallRecordInfoReply(const QList<CallRecordInfo>& lstCallRecordInfo)
{
	m_lstCallRecordInfo = lstCallRecordInfo;
}

void CDatabaseDataManager::Slot_RadioStatusInfoReply(const QList<RadioStatus>& lstRadioStatusInfo)
{
	m_lstRadioStatusInfo = lstRadioStatusInfo;
}

void CDatabaseDataManager::Slot_RecallReqeustInfoReply(const QList<RecallReqeust>& lstRecallRequestInfo)
{
	m_lstRecallRequestInfo = lstRecallRequestInfo;
}

void CDatabaseDataManager::Slot_EmergentCallInfoReply(const QList<EmergentCall>& lstEmergentCallInfo)
{
	m_lstEmergentCallInfo = lstEmergentCallInfo;
}

void CDatabaseDataManager::Slot_StationInfoReply(const QList<StationInfo>& lstStationInfo)
{
	m_lstStationInfo = lstStationInfo;
}
