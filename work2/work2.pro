#-------------------------------------------------
#
# Project created by QtCreator 2019-05-27T13:08:38
#
#-------------------------------------------------

QT       += core gui
QT +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = work2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    log_win.cpp \
    operate1_win.cpp \
    findbook.cpp \
    operate2_win.cpp \
    addbook.cpp \
    addbooks.cpp \
    findnote.cpp \
    returnbook.cpp \
    id_control.cpp \
    tips.cpp

HEADERS  += mainwindow.h \
    log_win.h \
    operate1_win.h \
    findbook.h \
    operate2_win.h \
    addbook.h \
    addbooks.h \
    findnote.h \
    returnbook.h \
    id_control.h \
    tips.h

FORMS    += mainwindow.ui \
    log_win.ui \
    operate1_win.ui \
    findbook.ui \
    operate2_win.ui \
    addbook.ui \
    addbooks.ui \
    findnote.ui \
    returnbook.ui \
    id_control.ui \
    tips.ui

RESOURCES += \
    qt_re.qrc
