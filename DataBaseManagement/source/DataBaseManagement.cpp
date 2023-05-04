#include "DataBaseManagement.h"
#include "DataBase.h"
#include <QThread>

CDataBaseManagement::CDataBaseManagement(QObject* parent)
	: QObject(parent)
{
	Init();
}

CDataBaseManagement::~CDataBaseManagement()
{
	if (nullptr != m_pDataBase)
	{
		if (!m_pDataBase->isFinished())
		{
			m_pDataBase->quit();
		}
	}
}

bool CDataBaseManagement::Initalize(const QString& strConfigFile)
{
	if (nullptr == m_pDataBase)
	{
		return false;
	}

	CSqlConnect connect;
	connect.ReadSqlConnectDataConfig(strConfigFile);
	m_pDataBase->Initalize(connect);

	return true;
}

bool CDataBaseManagement::Initalize(const QString& strDriver, const QString& strHost, const QString& strDatabaseName, const QString& strAccount, const QString& strPassword, int nPort)
{
	if (nullptr == m_pDataBase)
	{
		return false;
	}

	CSqlConnect connect;
	connect.SetDriver(strDriver);
	connect.SetHost(strHost);
	connect.SetDatabase(strDatabaseName);
	connect.SetAccount(strAccount);
	connect.SetPassword(strPassword);
	connect.SetPort(nPort);
	m_pDataBase->Initalize(connect);

	return true;
}

void CDataBaseManagement::Query(E_Query_Type eType, const QString& strSql)
{
	m_Mutex.lock();
	if (nullptr == m_pDataBase)
	{
		return;
	}
	m_pDataBase->SetSqlQuery(eType, strSql);

	if (!m_pDataBase->isFinished())
	{
		m_pDataBase->wait();
	}
	m_pDataBase->start();
}

void CDataBaseManagement::Unlock()
{
	m_Mutex.unlock();
}

void CDataBaseManagement::Slot_ThreadFinished()
{
}

void CDataBaseManagement::Init()
{
	m_pDataBase = new CDataBase(this, this);

	connect(m_pDataBase, &CDataBase::finished, this, &CDataBaseManagement::Slot_ThreadFinished);
}
