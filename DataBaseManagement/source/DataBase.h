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
	// ��ѯִ��
	bool DoQuery(QSqlQuery& query);
	// ��ѯ�г���Ϣ
	void DoQueryTrainInfo();
	// ��ѯ�û�����Ϣ
	void DoQueryUserGroupInfo();
	// �¼���־
	void DoEventLogInfo();
	// ��ѯͨ����¼
	void DoQueryCallRecordInfo();
	// ��̨״̬
	void DoQueryRadioStatusInfo();
	// �غ�����
	void DoQueryRecallRequestInfo();
	// ��������
	void DoQueryEmergentCall();
	// վ��Ϣ
	void DoQueryStationInfo();

private:
	QSqlDatabase m_oDatabase;
	CSqlConnect m_oSqlConnect;

	QMutex* m_pMutex = nullptr;
	QString m_strSql;
	E_Query_Type m_eQueryType;

	CDataBaseManagement* m_pDataBaseManagement = nullptr;
};
