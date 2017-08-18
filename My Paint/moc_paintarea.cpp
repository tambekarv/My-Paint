/****************************************************************************
** Meta object code from reading C++ file 'paintarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../hw3/paintarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paintarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_PaintArea_t {
    QByteArrayData data[14];
    char stringdata[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_PaintArea_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_PaintArea_t qt_meta_stringdata_PaintArea = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 13),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 5),
QT_MOC_LITERAL(4, 31, 13),
QT_MOC_LITERAL(5, 45, 5),
QT_MOC_LITERAL(6, 51, 10),
QT_MOC_LITERAL(7, 62, 10),
QT_MOC_LITERAL(8, 73, 8),
QT_MOC_LITERAL(9, 82, 13),
QT_MOC_LITERAL(10, 96, 14),
QT_MOC_LITERAL(11, 111, 11),
QT_MOC_LITERAL(12, 123, 13),
QT_MOC_LITERAL(13, 137, 6)
    },
    "PaintArea\0setBrushColor\0\0color\0"
    "setBrushWidth\0width\0pencilTool\0"
    "eraserTool\0lineTool\0rectangleTool\0"
    "roundedrecTool\0ellipseTool\0setFillFigure\0"
    "toFill\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PaintArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a,
       4,    1,   62,    2, 0x0a,
       6,    0,   65,    2, 0x0a,
       7,    0,   66,    2, 0x0a,
       8,    0,   67,    2, 0x0a,
       9,    0,   68,    2, 0x0a,
      10,    0,   69,    2, 0x0a,
      11,    0,   70,    2, 0x0a,
      12,    1,   71,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,

       0        // eod
};

void PaintArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PaintArea *_t = static_cast<PaintArea *>(_o);
        switch (_id) {
        case 0: _t->setBrushColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->setBrushWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->pencilTool(); break;
        case 3: _t->eraserTool(); break;
        case 4: _t->lineTool(); break;
        case 5: _t->rectangleTool(); break;
        case 6: _t->roundedrecTool(); break;
        case 7: _t->ellipseTool(); break;
        case 8: _t->setFillFigure((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PaintArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PaintArea.data,
      qt_meta_data_PaintArea,  qt_static_metacall, 0, 0}
};


const QMetaObject *PaintArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PaintArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PaintArea.stringdata))
        return static_cast<void*>(const_cast< PaintArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int PaintArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
