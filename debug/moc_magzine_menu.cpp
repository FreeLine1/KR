/****************************************************************************
** Meta object code from reading C++ file 'magzine_menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../magzine_menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'magzine_menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Magzine_menu_t {
    QByteArrayData data[19];
    char stringdata0[310];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Magzine_menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Magzine_menu_t qt_meta_stringdata_Magzine_menu = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Magzine_menu"
QT_MOC_LITERAL(1, 13, 22), // "on_tableView_activated"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "QModelIndex"
QT_MOC_LITERAL(4, 49, 5), // "index"
QT_MOC_LITERAL(5, 55, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(6, 77, 4), // "arg1"
QT_MOC_LITERAL(7, 82, 18), // "on_addprod_clicked"
QT_MOC_LITERAL(8, 101, 18), // "on_refresh_clicked"
QT_MOC_LITERAL(9, 120, 19), // "on_dellprod_clicked"
QT_MOC_LITERAL(10, 140, 24), // "on_label_4_linkActivated"
QT_MOC_LITERAL(11, 165, 4), // "link"
QT_MOC_LITERAL(12, 170, 29), // "on_label_4_windowTitleChanged"
QT_MOC_LITERAL(13, 200, 5), // "title"
QT_MOC_LITERAL(14, 206, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(15, 230, 33), // "on_lineEdit_cursorPositionCha..."
QT_MOC_LITERAL(16, 264, 4), // "arg2"
QT_MOC_LITERAL(17, 269, 22), // "on_lineEdit_textEdited"
QT_MOC_LITERAL(18, 292, 17) // "on_search_clicked"

    },
    "Magzine_menu\0on_tableView_activated\0"
    "\0QModelIndex\0index\0on_comboBox_activated\0"
    "arg1\0on_addprod_clicked\0on_refresh_clicked\0"
    "on_dellprod_clicked\0on_label_4_linkActivated\0"
    "link\0on_label_4_windowTitleChanged\0"
    "title\0on_lineEdit_textChanged\0"
    "on_lineEdit_cursorPositionChanged\0"
    "arg2\0on_lineEdit_textEdited\0"
    "on_search_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Magzine_menu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      12,    1,   81,    2, 0x08 /* Private */,
      14,    1,   84,    2, 0x08 /* Private */,
      15,    2,   87,    2, 0x08 /* Private */,
      17,    1,   92,    2, 0x08 /* Private */,
      18,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,   16,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

       0        // eod
};

void Magzine_menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Magzine_menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_addprod_clicked(); break;
        case 3: _t->on_refresh_clicked(); break;
        case 4: _t->on_dellprod_clicked(); break;
        case 5: _t->on_label_4_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_label_4_windowTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_lineEdit_cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->on_lineEdit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->on_search_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Magzine_menu::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Magzine_menu.data,
    qt_meta_data_Magzine_menu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Magzine_menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Magzine_menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Magzine_menu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Magzine_menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
