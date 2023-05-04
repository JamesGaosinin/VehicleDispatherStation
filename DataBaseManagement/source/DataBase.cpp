#include "DataBase.h"
#include <QSqlQuery>
#include <QVariant>
#include <QSqlError>
#include <QMutexLocker>
#include "DataBaseManagement.h"

CDataBase::CDataBase(CDataBaseManagement* pManagement, QObject *parent)
	: QThread(parent)
	, m_pDataBaseManagement(pManagement)
	, m_eQueryType(E_Query_Type_TrainInfo)
{
	Init();
}

CDataBase::~CDataBase()
{
}

void CDataBase::Initalize(const CSqlConnect & oCnnect)
{
	m_oSqlConnect = oCnnect;
}

CSqlConnect CDataBase::GetConnect()
{
	return m_oSqlConnect;
}

void CDataBase::SetSqlQuery(E_Query_Type eType, const QString& strSql)
{
	//m_pMutex->lock();
	m_eQueryType = eType;
	m_strSql = strSql;
}

void CDataBase::run()
{
	if (!OpenDatabase())
	{
		return;
	}
	
	switch (m_eQueryType)
	{
	case E_Query_Type_TrainInfo:
	{
		DoQueryTrainInfo();
	}break;

	case E_Query_Type_UserGroup:
	{
		DoQueryUserGroupInfo();
	}break;

	case E_Query_Type_EventLog:
	{
		DoEventLogInfo();
	}break;

	case E_Query_Type_CallRecord:
	{
		DoQueryCallRecordInfo();
	}break;

	case E_Query_Type_RadioStatus:
	{
		DoQueryRadioStatusInfo();
	}break;

	case E_Query_Type_RecallRequest:
	{
		DoQueryRecallRequestInfo();
	}break;

	case E_Query_Type_EmergentCall:
	{
		DoQueryEmergentCall();
	}break;

	case E_Query_Type_Station:
	{
		DoQueryStationInfo();
	}break;

	default:
		break;
	}

	m_pDataBaseManagement->Unlock();
	m_oDatabase.close();
}

void CDataBase::Init()
{
	m_pMutex = new QMutex(QMutex::Recursive);
}

bool CDataBase::OpenDatabase()
{
	m_oDatabase.close();

	if (QSqlDatabase::contains("qt_sql_default_connection"))
	{
		m_oDatabase = QSqlDatabase::database("qt_sql_default_connection");
	}
	else
	{
		m_oDatabase = QSqlDatabase::addDatabase("QODBC");
	}
	m_oDatabase.setHostName(m_oSqlConnect.GetHost());
	m_oDatabase.setDatabaseName(m_oSqlConnect.GetDatabaseName());
	m_oDatabase.setUserName(m_oSqlConnect.GetAccount());
	m_oDatabase.setPassword(m_oSqlConnect.GetPassword());
	if (m_oSqlConnect.GetPort() != 0)
	{
		m_oDatabase.setPort(m_oSqlConnect.GetPort());
	}
	bool bRet = m_oDatabase.open();

	if (!bRet)
	{
		QSqlError error = m_oDatabase.lastError();
		QString strText = QStringLiteral("打开数据库失败:%1").arg(error.text());
		emit m_pDataBaseManagement->Sig_QueryFail(strText);
	}

	return bRet;
}

bool CDataBase::DoQuery(QSqlQuery& query)
{
	QSqlQuery queryTemp(m_oDatabase);
	if (!queryTemp.exec(m_strSql))
	{
		QSqlError error = queryTemp.lastError();
		QString strText = QStringLiteral("查询失败:%1").arg(error.text());
		emit m_pDataBaseManagement->Sig_QueryFail(strText);
		return false;
	}

	query = queryTemp;
	return true;
}

void CDataBase::DoQueryTrainInfo()
{
	QSqlQuery query;
	if (!DoQuery(query))
	{
		return;
	}
	if (!query.first())
	{
		return;
	}

	TrainInfo sTrainInfo;
	QList<TrainInfo> lstTrainInfo;
	while (1)
	{
		int nColum = 0;
		sTrainInfo.nIndex = query.value(nColum++).toInt();
		sTrainInfo.strTrainId = query.value(nColum++).toString();
		sTrainInfo.strTrainNo = query.value(nColum++).toString();
		sTrainInfo.strDriverNo = query.value(nColum++).toString();
		sTrainInfo.strPosition = query.value(nColum++).toString();
		sTrainInfo.nUpDownType = query.value(nColum++).toInt();
		sTrainInfo.nRadioHeadStatus = query.value(nColum++).toInt();
		sTrainInfo.nRadioTailStatus = query.value(nColum++).toInt();
		sTrainInfo.strGroupName = query.value(nColum++).toString();
		sTrainInfo.nListeningState = query.value(nColum++).toInt();

		lstTrainInfo << sTrainInfo;
		if (!query.next())
		{
			break;
		}
	}

	emit m_pDataBaseManagement->Sig_QueryTrainInfoFinished(lstTrainInfo);
}

void CDataBase::DoQueryUserGroupInfo()
{
	QSqlQuery query;
	if (!DoQuery(query))
	{
		return;
	}
	if (!query.first())
	{
		return;
	}

	UserGroupInfo stUserGroupInfo;
	QList<UserGroupInfo> lstUserGroupInfo;
	while (1)
	{
		int nColum = 0;
		stUserGroupInfo.nIndex = query.value(nColum++).toInt();
		stUserGroupInfo.strGroupName = query.value(nColum++).toString();
		stUserGroupInfo.strGroupID = query.value(nColum++).toString();
		stUserGroupInfo.strListeningStatus = query.value(nColum++).toString();

		lstUserGroupInfo << stUserGroupInfo;
		if (!query.next())
		{
			break;
		}
	}

	emit m_pDataBaseManagement->Sig_QueryUserGroupInfoFinished(lstUserGroupInfo);
}

void CDataBase::DoEventLogInfo()
{
	QSqlQuery query;
	if (!DoQuery(query))
	{
		return;
	}
	if (!query.first())
	{
		return;
	}

	EventLogInfo stEventLogInfo;
	QList<EventLogInfo> lstEventLogInfo;
	while (1)
	{
		int nColum = 0;
		stEventLogInfo.nIndex = query.value(nColum++).toInt();
		stEventLogInfo.strLogStatus = query.value(nColum++).toString();
		stEventLogInfo.lLogTime = query.value(nColum++).toLongLong();
		stEventLogInfo.strLogContent = query.value(nColum++).toString();

		lstEventLogInfo << stEventLogInfo;
		if (!query.next())
		{
			break;
		}
	}

	emit m_pDataBaseManagement->Sig_QueryEventLogInfoFinished(lstEventLogInfo);
}

void CDataBase::DoQueryCallRecordInfo()
{
	QSqlQuery query;
	if (!DoQuery(query))
	{
		return;
	}
	if (!query.first())
	{
		return;
	}

	CallRecordInfo stCallRecordInfo;
	QList<CallRecordInfo> lstCallRecord;
	while (1)
	{
		int nColum = 0;
		stCallRecordInfo.nIndex = query.value(nColum++).toInt();
		stCallRecordInfo.lRecordTime = query.value(nColum++).toLongLong();
		stCallRecordInfo.strGroupName = query.value(nColum++).toString();
		stCallRecordInfo.strRadioName = query.value(nColum++).toString();
		stCallRecordInfo.strRadioId = query.value(nColum++).toString();

		lstCallRecord << stCallRecordInfo;
		if (!query.next())
		{
			break;
		}
	}

	emit m_pDataBaseManagement->Sig_QueryCallRecordInfoFinished(lstCallRecord);
}

void CDataBase::DoQueryRadioStatusInfo()
{
	QSqlQuery query;
	if (!DoQuery(query))
	{
		return;
	}
	if (!query.first())
	{
		return;
	}

	RadioStatus stRadioStatus;
	QList<RadioStatus> lstRadioStatus;
	while (1)
	{
		int nColum = 0;
		stRadioStatus.nIndex = query.value(nColum++).toInt();
		stRadioStatus.strRadioName = query.value(nColum++).toString();
		stRadioStatus.strRadioID = query.value(nColum++).toString();
		stRadioStatus.strRadioType = query.value(nColum++).toString();
		stRadioStatus.strRadioState = query.value(nColum++).toString();
		stRadioStatus.strGuardCommGroup = query.value(nColum++).toString();
		stRadioStatus.strRegistStation = query.value(nColum++).toString();

		lstRadioStatus << stRadioStatus;
		if (!query.next())
		{
			break;
		}
	}

	emit m_pDataBaseManagement->Sig_QueryRadioStatusInfoFinished(lstRadioStatus);
}

void CDataBase::DoQueryRecallRequestInfo()
{
	QSqlQuery query;
	if (!DoQuery(query))
	{
		return;
	}
	if (!query.first())
	{
		return;
	}

	RecallReqeust stRecallReqeust;
	QList<RecallReqeust> lstRecallReqeust;
	while (1)
	{
		int nColum = 0;
		stRecallReqeust.nIndex = query.value(nColum++).toInt();
		stRecallReqeust.lTime = query.value(nColum++).toLongLong();
		stRecallReqeust.strRadioName = query.value(nColum++).toString();
		stRecallReqeust.strStationName = query.value(nColum++).toString();
		stRecallReqeust.TrainNo = query.value(nColum++).toString();

		lstRecallReqeust << stRecallReqeust;
		if (!query.next())
		{
			break;
		}
	}

	emit m_pDataBaseManagement->Sig_QueryRecallReqeustInfoFinished(lstRecallReqeust);
}

void CDataBase::DoQueryEmergentCall()
{
	QSqlQuery query;
	if (!DoQuery(query))
	{
		return;
	}
	if (!query.first())
	{
		return;
	}

	EmergentCall stEmergentCall;
	QList<EmergentCall> lstEmergentCall;
	while (1)
	{
		int nColum = 0;
		stEmergentCall.nIndex = query.value(nColum++).toInt();
		stEmergentCall.lTime = query.value(nColum++).toLongLong();
		stEmergentCall.strGroupName = query.value(nColum++).toString();
		stEmergentCall.strRadioName = query.value(nColum++).toString();
		stEmergentCall.strRadioID = query.value(nColum++).toString();
		stEmergentCall.strStatus = query.value(nColum++).toString();

		lstEmergentCall << stEmergentCall;
		if (!query.next())
		{
			break;
		}
	}

	emit m_pDataBaseManagement->Sig_QueryEmergentCallInfoFinished(lstEmergentCall);
}

void CDataBase::DoQueryStationInfo()
{
	QSqlQuery query;
	if (!DoQuery(query))
	{
		return;
	}
	if (!query.first())
	{
		return;
	}

	StationInfo stStationInfo;
	QList<StationInfo> lstStaionInfo;
	while (1)
	{
		int nColum = 0;
		stStationInfo.nIndex = query.value(nColum++).toInt();
		stStationInfo.strStationName = query.value(nColum++).toString();
		stStationInfo.strPhoneNo = query.value(nColum++).toString();
		stStationInfo.nBeginGLB = query.value(nColum++).toInt();
		stStationInfo.nEndGLB = query.value(nColum++).toInt();

		lstStaionInfo << stStationInfo;
		if (!query.next())
		{
			break;
		}
	}

	emit m_pDataBaseManagement->Sig_QueryStationInfoFinished(lstStaionInfo);
}
