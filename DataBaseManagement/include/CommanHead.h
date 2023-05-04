#ifndef __COMMONHEAD_H_
#define __COMMONHEAD_H_

enum E_Query_Type
{
	E_Query_Type_TrainInfo=0,		// 车辆信息
	E_Query_Type_UserGroup,			// 车辆信息
	E_Query_Type_EventLog,			// 事件日志
	E_Query_Type_CallRecord,		// 通话记录
	E_Query_Type_RadioStatus,		// 电台状态

	E_Query_Type_RecallRequest,		// 回呼请求
	E_Query_Type_EmergentCall,		// 紧急呼叫
	E_Query_Type_Station,			// 站信息
};

struct TrainInfo
{
	int nIndex;					// 列车索引号
	QString strTrainId;			// 列车号
	QString strTrainNo;			// 车次号
	QString strDriverNo;		// 司机号	
	QString strPosition;		// 位置	
	int nUpDownType;			// 上/下行		0->上行，1->下行
	int nRadioHeadStatus;		// 车头电台	
	int nRadioTailStatus;		// 车位电台	
	QString strGroupName;		// 通话组	
	int nListeningState;		// 监听状态	
};

struct UserGroupInfo
{
	int nIndex;					// 用户组索引
	QString strGroupName;		// 通话组名称
	QString strGroupID;			// 通话组ID
	QString strListeningStatus;	// 监听状态
};

struct CallRecordInfo
{
	int nIndex;					// 记录索引号
	long long lRecordTime;		// 记录时间
	QString strGroupName;		// 通话组
	QString strRadioName;		// 电台
	QString strRadioId;			// 电台ID
};

struct EventLogInfo
{
	int nIndex;					// 记录索引号
	QString strLogStatus;		// 状态
	long long lLogTime;			// 时间
	QString strLogContent;		// 内容
};

struct RadioStatus
{
	int nIndex;					// 记录索引号
	QString strRadioName;		// 电台名称
	QString strRadioID;			// 电台ID
	QString strRadioType;		// 电台类型
	QString strRadioState;		// 电台状态
	QString strGuardCommGroup;	// 守候通话组
	QString strRegistStation;	// 注册基站
};

struct RecallReqeust
{
	int nIndex;					// 记录索引号
	long long lTime;			// 时间
	QString strRadioName;		// 电台
	QString strStationName;		// 车组号/车站
	QString TrainNo;			// 车次号
};

struct EmergentCall
{
	int nIndex;					// 记录索引号
	long long lTime;			// 时间
	QString strGroupName;		// 通话组
	QString strRadioName;		// 电台名称
	QString strRadioID;			// 电台ID
	QString strStatus;			// 状态
};

struct StationInfo
{
	int nIndex;					// 记录索引号
	QString strStationName;		// 车站名
	QString strPhoneNo;			// 电话号码
	int nBeginGLB;				// 开始公里标
	int nEndGLB;				// 结束公里标
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