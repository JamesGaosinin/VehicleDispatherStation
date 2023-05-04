/****************************************************************************
** Meta object code from reading C++ file 'DataBaseManagement.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../include/DataBaseManagement.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DataBaseManagement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CDataBaseManagement_t {
    QByteArrayData data[28];
    char stringdata0[597];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDataBaseManagement_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDataBaseManagement_t qt_meta_stringdata_CDataBaseManagement = {
    {
QT_MOC_LITERAL(0, 0, 19), // "CDataBaseManagement"
QT_MOC_LITERAL(1, 20, 13), // "Sig_QueryFail"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 8), // "strError"
QT_MOC_LITERAL(4, 44, 26), // "Sig_QueryTrainInfoFinished"
QT_MOC_LITERAL(5, 71, 16), // "QList<TrainInfo>"
QT_MOC_LITERAL(6, 88, 12), // "lstTrainInfo"
QT_MOC_LITERAL(7, 101, 30), // "Sig_QueryUserGroupInfoFinished"
QT_MOC_LITERAL(8, 132, 20), // "QList<UserGroupInfo>"
QT_MOC_LITERAL(9, 153, 16), // "lstUserGroupInfo"
QT_MOC_LITERAL(10, 170, 29), // "Sig_QueryEventLogInfoFinished"
QT_MOC_LITERAL(11, 200, 19), // "QList<EventLogInfo>"
QT_MOC_LITERAL(12, 220, 17), // "lstCallRecordInfo"
QT_MOC_LITERAL(13, 238, 31), // "Sig_QueryCallRecordInfoFinished"
QT_MOC_LITERAL(14, 270, 21), // "QList<CallRecordInfo>"
QT_MOC_LITERAL(15, 292, 32), // "Sig_QueryRadioStatusInfoFinished"
QT_MOC_LITERAL(16, 325, 18), // "QList<RadioStatus>"
QT_MOC_LITERAL(17, 344, 18), // "lstRadioStatusInfo"
QT_MOC_LITERAL(18, 363, 34), // "Sig_QueryRecallReqeustInfoFin..."
QT_MOC_LITERAL(19, 398, 20), // "QList<RecallReqeust>"
QT_MOC_LITERAL(20, 419, 20), // "lstRecallRequestInfo"
QT_MOC_LITERAL(21, 440, 33), // "Sig_QueryEmergentCallInfoFini..."
QT_MOC_LITERAL(22, 474, 19), // "QList<EmergentCall>"
QT_MOC_LITERAL(23, 494, 19), // "lstEmergentCallInfo"
QT_MOC_LITERAL(24, 514, 28), // "Sig_QueryStationInfoFinished"
QT_MOC_LITERAL(25, 543, 18), // "QList<StationInfo>"
QT_MOC_LITERAL(26, 562, 14), // "lstStationInfo"
QT_MOC_LITERAL(27, 577, 19) // "Slot_ThreadFinished"

    },
    "CDataBaseManagement\0Sig_QueryFail\0\0"
    "strError\0Sig_QueryTrainInfoFinished\0"
    "QList<TrainInfo>\0lstTrainInfo\0"
    "Sig_QueryUserGroupInfoFinished\0"
    "QList<UserGroupInfo>\0lstUserGroupInfo\0"
    "Sig_QueryEventLogInfoFinished\0"
    "QList<EventLogInfo>\0lstCallRecordInfo\0"
    "Sig_QueryCallRecordInfoFinished\0"
    "QList<CallRecordInfo>\0"
    "Sig_QueryRadioStatusInfoFinished\0"
    "QList<RadioStatus>\0lstRadioStatusInfo\0"
    "Sig_QueryRecallReqeustInfoFinished\0"
    "QList<RecallReqeust>\0lstRecallRequestInfo\0"
    "Sig_QueryEmergentCallInfoFinished\0"
    "QList<EmergentCall>\0lstEmergentCallInfo\0"
    "Sig_QueryStationInfoFinished\0"
    "QList<StationInfo>\0lstStationInfo\0"
    "Slot_ThreadFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDataBaseManagement[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
      10,    1,   73,    2, 0x06 /* Public */,
      13,    1,   76,    2, 0x06 /* Public */,
      15,    1,   79,    2, 0x06 /* Public */,
      18,    1,   82,    2, 0x06 /* Public */,
      21,    1,   85,    2, 0x06 /* Public */,
      24,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 14,   12,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25,   26,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void CDataBaseManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDataBaseManagement *_t = static_cast<CDataBaseManagement *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sig_QueryFail((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->Sig_QueryTrainInfoFinished((*reinterpret_cast< const QList<TrainInfo>(*)>(_a[1]))); break;
        case 2: _t->Sig_QueryUserGroupInfoFinished((*reinterpret_cast< const QList<UserGroupInfo>(*)>(_a[1]))); break;
        case 3: _t->Sig_QueryEventLogInfoFinished((*reinterpret_cast< const QList<EventLogInfo>(*)>(_a[1]))); break;
        case 4: _t->Sig_QueryCallRecordInfoFinished((*reinterpret_cast< const QList<CallRecordInfo>(*)>(_a[1]))); break;
        case 5: _t->Sig_QueryRadioStatusInfoFinished((*reinterpret_cast< const QList<RadioStatus>(*)>(_a[1]))); break;
        case 6: _t->Sig_QueryRecallReqeustInfoFinished((*reinterpret_cast< const QList<RecallReqeust>(*)>(_a[1]))); break;
        case 7: _t->Sig_QueryEmergentCallInfoFinished((*reinterpret_cast< const QList<EmergentCall>(*)>(_a[1]))); break;
        case 8: _t->Sig_QueryStationInfoFinished((*reinterpret_cast< const QList<StationInfo>(*)>(_a[1]))); break;
        case 9: _t->Slot_ThreadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CDataBaseManagement::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryFail)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CDataBaseManagement::*_t)(const QList<TrainInfo> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryTrainInfoFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CDataBaseManagement::*_t)(const QList<UserGroupInfo> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryUserGroupInfoFinished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CDataBaseManagement::*_t)(const QList<EventLogInfo> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryEventLogInfoFinished)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CDataBaseManagement::*_t)(const QList<CallRecordInfo> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryCallRecordInfoFinished)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CDataBaseManagement::*_t)(const QList<RadioStatus> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryRadioStatusInfoFinished)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CDataBaseManagement::*_t)(const QList<RecallReqeust> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryRecallReqeustInfoFinished)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CDataBaseManagement::*_t)(const QList<EmergentCall> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryEmergentCallInfoFinished)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (CDataBaseManagement::*_t)(const QList<StationInfo> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CDataBaseManagement::Sig_QueryStationInfoFinished)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject CDataBaseManagement::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CDataBaseManagement.data,
      qt_meta_data_CDataBaseManagement,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDataBaseManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDataBaseManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDataBaseManagement.stringdata0))
        return static_cast<void*>(const_cast< CDataBaseManagement*>(this));
    return QObject::qt_metacast(_clname);
}

int CDataBaseManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void CDataBaseManagement::Sig_QueryFail(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CDataBaseManagement::Sig_QueryTrainInfoFinished(const QList<TrainInfo> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CDataBaseManagement::Sig_QueryUserGroupInfoFinished(const QList<UserGroupInfo> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CDataBaseManagement::Sig_QueryEventLogInfoFinished(const QList<EventLogInfo> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CDataBaseManagement::Sig_QueryCallRecordInfoFinished(const QList<CallRecordInfo> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CDataBaseManagement::Sig_QueryRadioStatusInfoFinished(const QList<RadioStatus> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CDataBaseManagement::Sig_QueryRecallReqeustInfoFinished(const QList<RecallReqeust> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CDataBaseManagement::Sig_QueryEmergentCallInfoFinished(const QList<EmergentCall> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void CDataBaseManagement::Sig_QueryStationInfoFinished(const QList<StationInfo> & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
