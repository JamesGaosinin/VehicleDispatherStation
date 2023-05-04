#ifndef __SQLCONNECT_H_
#define __SQLCONNECT_H_
#include <QObject>

class CSqlConnect : public QObject
{
	Q_OBJECT

public:
	CSqlConnect(QObject *parent = nullptr);
	CSqlConnect(const QString& strDriver, const QString& strHost, const QString& strDatabaseName, const QString& strAccount, const QString& strPassword, int nPort, QObject *parent = nullptr);
	~CSqlConnect();
	CSqlConnect(const CSqlConnect& other);
	CSqlConnect& operator=(const CSqlConnect& other);

	void SetDriver(const QString& strDriver);
	QString GetDriver() const;
	void SetHost(const QString& strHost);
	QString GetHost() const;
	void SetDatabase(const QString& strDatabaseName);
	QString GetDatabaseName() const;
	void SetAccount(const QString& strAccount);
	QString GetAccount();
	void SetPassword(const QString& strPassword);
	QString GetPassword() const;
	void SetPort(int nPort = 0);
	int GetPort() const;

	void ReadSqlConnectDataConfig(const QString& strFullFileName);

private:
	QString m_strDriver;
	QString m_strHost;
	QString m_strDatabaseName;
	QString m_strAccount;
	QString m_strPassword;
	int m_nPort;
};
#endif //!__SQLCONNECT_H_
