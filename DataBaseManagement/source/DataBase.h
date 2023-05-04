#pragma once

#include <QThread>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMutex>
#include "SqlConnect.h"
#include "CommanHead.h"

class CDataBaseManagement;

class CDataBase : public QThread
{
	Q_OBJECT

public:
	CDataBase(CDataBaseManagement* pManagement, QObject *parent = nullptr);
	~CDataBase();

	void Initalize(const CSqlConnect & oCnnect);
	CSqlConnect GetConnect();

	void SetSqlQuery(E_Query_Type eType, const QString& strSql);

protected:
	virtual void run() override;

private:
	void Init();
	bool OpenDatabase();

private:
	// 查询执行
	bool DoQuery(QSqlQuery& query);
	// 查询列车信息
	void DoQueryTrainInfo();
	// 查询用户组信息
	void DoQueryUserGroupInfo();
	// 事件日志
	void DoEventLogInfo();
	// 查询通话记录
	void DoQueryCallRecordInfo();
	// 电台状态
	void DoQueryRadioStatusInfo();
	// 回呼请求
	void DoQueryRecallRequestInfo();
	// 紧急呼叫
	void DoQueryEmergentCall();
	// 站信息
	void DoQueryStationInfo();

private:
	QSqlDatabase m_oDatabase;
	CSqlConnect m_oSqlConnect;

	QMutex* m_pMutex = nullptr;
	QString m_strSql;
	E_Query_Type m_eQueryType;

	CDataBaseManagement* m_pDataBaseManagement = nullptr;
};
