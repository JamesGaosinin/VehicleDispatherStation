#include "SqlConnect.h"
#include <QFile>
#include <QDomDocument>

CSqlConnect::CSqlConnect(QObject *parent)
	: QObject(parent)
{
}

CSqlConnect::CSqlConnect(const QString& strDriver, const QString& strHost, const QString& strDatabaseName, const QString& strAccount, const QString& strPassword, int nPort, QObject *parent /*= nullptr*/)
	: QObject(parent)
	, m_strDriver(strDriver)
	, m_strHost(strHost)
	, m_strDatabaseName(strDatabaseName)
	, m_strAccount(strAccount)
	, m_strPassword(strPassword)
	, m_nPort(nPort)
{
}

CSqlConnect::CSqlConnect(const CSqlConnect& other)
{
	m_strDriver = other.m_strDriver;
	m_strHost = other.m_strHost;
	m_strDatabaseName = other.m_strDatabaseName;
	m_strAccount = other.m_strAccount;
	m_strPassword = other.m_strPassword;
	m_nPort = other.m_nPort;
}

CSqlConnect& CSqlConnect::operator=(const CSqlConnect& other)
{
	m_strDriver = other.m_strDriver;
	m_strHost = other.m_strHost;
	m_strDatabaseName = other.m_strDatabaseName;
	m_strAccount = other.m_strAccount;
	m_strPassword = other.m_strPassword;
	m_nPort = other.m_nPort;

	return *this;
}

CSqlConnect::~CSqlConnect()
{
}

void CSqlConnect::SetDriver(const QString& strDriver)
{
	m_strDriver = strDriver;
}

QString CSqlConnect::GetDriver() const
{
	return m_strDriver;
}

void CSqlConnect::SetHost(const QString& strHost)
{
	m_strHost = strHost;
}

QString CSqlConnect::GetHost() const
{
	return m_strHost;
}

void CSqlConnect::SetDatabase(const QString& strDatabaseName)
{
	m_strDatabaseName = strDatabaseName;
}

QString CSqlConnect::GetDatabaseName() const
{
	return m_strDatabaseName;
}

void CSqlConnect::SetAccount(const QString& strAccount)
{
	m_strAccount = strAccount;
}

QString CSqlConnect::GetAccount()
{
	return m_strAccount;
}

void CSqlConnect::SetPassword(const QString& strPassword)
{
	m_strPassword = strPassword;
}

QString CSqlConnect::GetPassword() const
{
	return m_strPassword;
}

void CSqlConnect::SetPort(int nPort)
{
	m_nPort = nPort;
}

int CSqlConnect::GetPort() const
{
	return m_nPort;
}

void CSqlConnect::ReadSqlConnectDataConfig(const QString& strFullFileName)
{
	// TODO 读取xml文件设置数据
	QFile file(strFullFileName);
	if (!file.exists())
	{
		return;
	}
	if (!file.open(QIODevice::ReadOnly))
	{
		return;
	}

	QDomDocument doc;
	doc.setContent(&file);
	QDomElement rootEle = doc.documentElement();
	if (rootEle.isNull())
	{
		return;
	}

	m_strDriver = "QODBC";
	m_strHost = "127.0.0.1";
	m_strDatabaseName = "VehicleDispather";
	m_strAccount = "sa";
	m_strPassword = "123456";

	file.close();
}
