#ifndef __DATABASEMANAGEMENT_H_
#define __DATABASEMANAGEMENT_H_

#include "databasemanagement_global.h"
#include <QObject>
#include <QList>
#include <QSqlQuery>
#include "CommanHead.h"

class CDataBase;
class QThread;


class DATABASEMANAGEMENT_EXPORT CDataBaseManagement : public QObject
{
	Q_OBJECT
public:
	CDataBaseManagement(QObject* parent = nullptr);
	~CDataBaseManagement();
	bool Initalize(const QString& strConfigFile);
	bool Initalize(const QString& strDriver, const QString& strHost, const QString& strDatabaseName, const QString& strAccount, const QString& strPassword, int nPort = 0);

	// 查询数据的类型，查询语句，语句完全需要自己构造
	void Query(E_Query_Type eType, const QString& strSql);

	void Unlock();

signals:
	void Sig_QueryFail(const QString& strError);
	// 通过信号发送查询的数据
	void Sig_QueryTrainInfoFinished(const QList<TrainInfo>& lstTrainInfo);
	void Sig_QueryUserGroupInfoFinished(const QList<UserGroupInfo>& lstUserGroupInfo);

	void Sig_QueryEventLogInfoFinished(const QList<EventLogInfo>& lstCallRecordInfo);
	void Sig_QueryCallRecordInfoFinished(const QList<CallRecordInfo>& lstCallRecordInfo);
	void Sig_QueryRadioStatusInfoFinished(const QList<RadioStatus>& lstRadioStatusInfo);

	void Sig_QueryRecallReqeustInfoFinished(const QList<RecallReqeust>& lstRecallRequestInfo);
	void Sig_QueryEmergentCallInfoFinished(const QList<EmergentCall>& lstEmergentCallInfo);

	void Sig_QueryStationInfoFinished(const QList<StationInfo>& lstStationInfo);

private slots:
	void Slot_ThreadFinished();


private:
	void Init();

private:
	QMutex m_Mutex;
	CDataBase* m_pDataBase = nullptr;
};
#endif //!__DATABASEMANAGEMENT_H_