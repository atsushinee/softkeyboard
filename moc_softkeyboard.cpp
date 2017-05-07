/****************************************************************************
** Meta object code from reading C++ file 'softkeyboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "softkeyboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'softkeyboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SoftKeyboard_t {
    QByteArrayData data[20];
    char stringdata[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoftKeyboard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoftKeyboard_t qt_meta_stringdata_SoftKeyboard = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SoftKeyboard"
QT_MOC_LITERAL(1, 13, 8), // "sendText"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "text"
QT_MOC_LITERAL(4, 28, 19), // "numberLetterBtnSlot"
QT_MOC_LITERAL(5, 48, 26), // "candidateLetterChangedSlot"
QT_MOC_LITERAL(6, 75, 20), // "candidateWordBtnSlot"
QT_MOC_LITERAL(7, 96, 24), // "candidateWordPrePageSlot"
QT_MOC_LITERAL(8, 121, 25), // "candidateWordNextPageSlot"
QT_MOC_LITERAL(9, 147, 20), // "hideInputDiaplayArea"
QT_MOC_LITERAL(10, 168, 20), // "changeUpperLowerSlot"
QT_MOC_LITERAL(11, 189, 14), // "deleteTextSlot"
QT_MOC_LITERAL(12, 204, 13), // "closeDelTimer"
QT_MOC_LITERAL(13, 218, 14), // "changeSkinSlot"
QT_MOC_LITERAL(14, 233, 22), // "changeLetterSymbolSlot"
QT_MOC_LITERAL(15, 256, 9), // "spaceSlot"
QT_MOC_LITERAL(16, 266, 14), // "changeChEnSlot"
QT_MOC_LITERAL(17, 281, 9), // "enterSlot"
QT_MOC_LITERAL(18, 291, 11), // "quitBtnSlot"
QT_MOC_LITERAL(19, 303, 9) // "okBtnSlot"

    },
    "SoftKeyboard\0sendText\0\0text\0"
    "numberLetterBtnSlot\0candidateLetterChangedSlot\0"
    "candidateWordBtnSlot\0candidateWordPrePageSlot\0"
    "candidateWordNextPageSlot\0"
    "hideInputDiaplayArea\0changeUpperLowerSlot\0"
    "deleteTextSlot\0closeDelTimer\0"
    "changeSkinSlot\0changeLetterSymbolSlot\0"
    "spaceSlot\0changeChEnSlot\0enterSlot\0"
    "quitBtnSlot\0okBtnSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoftKeyboard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  102,    2, 0x0a /* Public */,
       5,    1,  103,    2, 0x0a /* Public */,
       6,    0,  106,    2, 0x0a /* Public */,
       7,    0,  107,    2, 0x0a /* Public */,
       8,    0,  108,    2, 0x0a /* Public */,
       9,    0,  109,    2, 0x0a /* Public */,
      10,    0,  110,    2, 0x0a /* Public */,
      11,    0,  111,    2, 0x0a /* Public */,
      12,    0,  112,    2, 0x0a /* Public */,
      13,    0,  113,    2, 0x0a /* Public */,
      14,    0,  114,    2, 0x0a /* Public */,
      15,    0,  115,    2, 0x0a /* Public */,
      16,    0,  116,    2, 0x0a /* Public */,
      17,    0,  117,    2, 0x0a /* Public */,
      18,    0,  118,    2, 0x0a /* Public */,
      19,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SoftKeyboard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoftKeyboard *_t = static_cast<SoftKeyboard *>(_o);
        switch (_id) {
        case 0: _t->sendText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->numberLetterBtnSlot(); break;
        case 2: _t->candidateLetterChangedSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->candidateWordBtnSlot(); break;
        case 4: _t->candidateWordPrePageSlot(); break;
        case 5: _t->candidateWordNextPageSlot(); break;
        case 6: _t->hideInputDiaplayArea(); break;
        case 7: _t->changeUpperLowerSlot(); break;
        case 8: _t->deleteTextSlot(); break;
        case 9: _t->closeDelTimer(); break;
        case 10: _t->changeSkinSlot(); break;
        case 11: _t->changeLetterSymbolSlot(); break;
        case 12: _t->spaceSlot(); break;
        case 13: _t->changeChEnSlot(); break;
        case 14: _t->enterSlot(); break;
        case 15: _t->quitBtnSlot(); break;
        case 16: _t->okBtnSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SoftKeyboard::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoftKeyboard::sendText)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SoftKeyboard::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SoftKeyboard.data,
      qt_meta_data_SoftKeyboard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SoftKeyboard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoftKeyboard::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SoftKeyboard.stringdata))
        return static_cast<void*>(const_cast< SoftKeyboard*>(this));
    return QWidget::qt_metacast(_clname);
}

int SoftKeyboard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void SoftKeyboard::sendText(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
