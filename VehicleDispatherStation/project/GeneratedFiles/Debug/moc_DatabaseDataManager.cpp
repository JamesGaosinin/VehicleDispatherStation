/****************************************************************************
** Meta object code from reading C++ file 'DatabaseDataManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../source/DatabaseDataManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseDataManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CDatabaseDataManager_t {
    QByteArrayData data[26];
    char stringdata0[515];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CDatabaseDataManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CDatabaseDataManager_t qt_meta_stringdata_CDatabaseDataManager = {
    {
QT_MOC_LITERAL(0, 0, 20), // "CDatabaseDataManager"
QT_MOC_LITERAL(1, 21, 19), // "Slot_TrainInfoReply"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "QList<TrainInfo>"
QT_MOC_LITERAL(4, 59, 12), // "lstTrainInfo"
QT_MOC_LITERAL(5, 72, 23), // "Slot_UserGroupInfoReply"
QT_MOC_LITERAL(6, 96, 20), // "QList<UserGroupInfo>"
QT_MOC_LITERAL(7, 117, 16), // "lstUserGroupInfo"
QT_MOC_LITERAL(8, 134, 22), // "Slot_EventLogInfoReply"
QT_MOC_LITERAL(9, 157, 19), // "QList<EventLogInfo>"
QT_MOC_LITERAL(10, 177, 15), // "lstEventLogInfo"
QT_MOC_LITERAL(11, 193, 24), // "Slot_CallRecordInfoReply"
QT_MOC_LITERAL(12, 218, 21), // "QList<CallRecordInfo>"
QT_MOC_LITERAL(13, 240, 17), // "lstCallRecordInfo"
QT_MOC_LITERAL(14, 258, 25), // "Slot_RadioStatusInfoReply"
QT_MOC_LITERAL(15, 284, 18), // "QList<RadioStatus>"
QT_MOC_LITERAL(16, 303, 18), // "lstRadioStatusInfo"
QT_MOC_LITERAL(17, 322, 27), // "Slot_RecallReqeustInfoReply"
QT_MOC_LITERAL(18, 350, 20), // "QList<RecallReqeust>"
QT_MOC_LITERAL(19, 371, 20), // "lstRecallRequestInfo"
QT_MOC_LITERAL(20, 392, 26), // "Slot_EmergentCallInfoReply"
QT_MOC_LITERAL(21, 419, 19), // "QList<EmergentCall>"
QT_MOC_LITERAL(22, 439, 19), // "lstEmergentCallInfo"
QT_MOC_LITERAL(23, 459, 21), // "Slot_StationInfoReply"
QT_MOC_LITERAL(24, 481, 18), // "QList<StationInfo>"
QT_MOC_LITERAL(25, 500, 14) // "lstStationInfo"

    },
    "CDatabaseDataManager\0Slot_TrainInfoReply\0"
    "\0QList<TrainInfo>\0lstTrainInfo\0"
    "Slot_UserGroupInfoReply\0QList<UserGroupInfo>\0"
    "lstUserGroupInfo\0Slot_EventLogInfoReply\0"
    "QList<EventLogInfo>\0lstEventLogInfo\0"
    "Slot_CallRecordInfoReply\0QList<CallRecordInfo>\0"
    "lstCallRecordInfo\0Slot_RadioStatusInfoReply\0"
    "QList<RadioStatus>\0lstRadioStatusInfo\0"
    "Slot_RecallReqeustInfoReply\0"
    "QList<RecallReqeust>\0lstRecallRequestInfo\0"
    "Slot_EmergentCallInfoReply\0"
    "QList<EmergentCall>\0lstEmergentCallInfo\0"
    "Slot_StationInfoReply\0QList<StationInfo>\0"
    "lstStationInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CDatabaseDataManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       8,    1,   60,    2, 0x0a /* Public */,
      11,    1,   63,    2, 0x0a /* Public */,
      14,    1,   66,    2, 0x0a /* Public */,
      17,    1,   69,    2, 0x0a /* Public */,
      20,    1,   72,    2, 0x0a /* Public */,
      23,    1,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,

       0        // eod
};

void CDatabaseDataManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CDatabaseDataManager *_t = static_cast<CDatabaseDataManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Slot_TrainInfoReply((*reinterpret_cast< const QList<TrainInfo>(*)>(_a[1]))); break;
        case 1: _t->Slot_UserGroupInfoReply((*reinterpret_cast< const QList<UserGroupInfo>(*)>(_a[1]))); break;
        case 2: _t->Slot_EventLogInfoReply((*reinterpret_cast< const QList<EventLogInfo>(*)>(_a[1]))); break;
        case 3: _t->Slot_CallRecordInfoReply((*reinterpret_cast< const QList<CallRecordInfo>(*)>(_a[1]))); break;
        case 4: _t->Slot_RadioStatusInfoReply((*reinterpret_cast< const QList<RadioStatus>(*)>(_a[1]))); break;
        case 5: _t->Slot_RecallReqeustInfoReply((*reinterpret_cast< const QList<RecallReqeust>(*)>(_a[1]))); break;
        case 6: _t->Slot_EmergentCallInfoReply((*reinterpret_cast< const QList<EmergentCall>(*)>(_a[1]))); break;
        case 7: _t->Slot_StationInfoReply((*reinterpret_cast< const QList<StationInfo>(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject CDatabaseDataManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CDatabaseDataManager.data,
      qt_meta_data_CDatabaseDataManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CDatabaseDataManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CDatabaseDataManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CDatabaseDataManager.stringdata0))
        return static_cast<void*>(const_cast< CDatabaseDataManager*>(this));
    return QObject::qt_metacast(_clname);
}

int CDatabaseDataManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
