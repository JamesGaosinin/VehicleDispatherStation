#ifndef __COMMONHEAD_H_
#define __COMMONHEAD_H_

enum E_Query_Type
{
	E_Query_Type_TrainInfo=0,		// ������Ϣ
	E_Query_Type_UserGroup,			// ������Ϣ
	E_Query_Type_EventLog,			// �¼���־
	E_Query_Type_CallRecord,		// ͨ����¼
	E_Query_Type_RadioStatus,		// ��̨״̬

	E_Query_Type_RecallRequest,		// �غ�����
	E_Query_Type_EmergentCall,		// ��������
	E_Query_Type_Station,			// վ��Ϣ
};

struct TrainInfo
{
	int nIndex;					// �г�������
	QString strTrainId;			// �г���
	QString strTrainNo;			// ���κ�
	QString strDriverNo;		// ˾����	
	QString strPosition;		// λ��	
	int nUpDownType;			// ��/����		0->���У�1->����
	int nRadioHeadStatus;		// ��ͷ��̨	
	int nRadioTailStatus;		// ��λ��̨	
	QString strGroupName;		// ͨ����	
	int nListeningState;		// ����״̬	
};

struct UserGroupInfo
{
	int nIndex;					// �û�������
	QString strGroupName;		// ͨ��������
	QString strGroupID;			// ͨ����ID
	QString strListeningStatus;	// ����״̬
};

struct CallRecordInfo
{
	int nIndex;					// ��¼������
	long long lRecordTime;		// ��¼ʱ��
	QString strGroupName;		// ͨ����
	QString strRadioName;		// ��̨
	QString strRadioId;			// ��̨ID
};

struct EventLogInfo
{
	int nIndex;					// ��¼������
	QString strLogStatus;		// ״̬
	long long lLogTime;			// ʱ��
	QString strLogContent;		// ����
};

struct RadioStatus
{
	int nIndex;					// ��¼������
	QString strRadioName;		// ��̨����
	QString strRadioID;			// ��̨ID
	QString strRadioType;		// ��̨����
	QString strRadioState;		// ��̨״̬
	QString strGuardCommGroup;	// �غ�ͨ����
	QString strRegistStation;	// ע���վ
};

struct RecallReqeust
{
	int nIndex;					// ��¼������
	long long lTime;			// ʱ��
	QString strRadioName;		// ��̨
	QString strStationName;		// �����/��վ
	QString TrainNo;			// ���κ�
};

struct EmergentCall
{
	int nIndex;					// ��¼������
	long long lTime;			// ʱ��
	QString strGroupName;		// ͨ����
	QString strRadioName;		// ��̨����
	QString strRadioID;			// ��̨ID
	QString strStatus;			// ״̬
};

struct StationInfo
{
	int nIndex;					// ��¼������
	QString strStationName;		// ��վ��
	QString strPhoneNo;			// �绰����
	int nBeginGLB;				// ��ʼ�����
	int nEndGLB;				// ���������
};

Q_DECLARE_METATYPE(TrainInfo)
Q_DECLARE_METATYPE(UserGroupInfo)
Q_DECLARE_METATYPE(EventLogInfo)
Q_DECLARE_METATYPE(CallRecordInfo)
Q_DECLARE_METATYPE(RadioStatus)
Q_DECLARE_METATYPE(RecallReqeust)
Q_DECLARE_METATYPE(EmergentCall)
Q_DECLARE_METATYPE(StationInfo)

#endif // !__COMMONHEAD_H_