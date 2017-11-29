#-------------------------------------------------
#
# Project created by QtCreator 2017-11-27T12:56:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Proyectofinal
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        final.cpp \
    fijo.cpp \
    mainwindow.cpp \
    regresionlineal.cpp \
    nwrsn.cpp \
    derivacion.cpp \
    eli_gauss.cpp \
    euler_m.cpp \
    integracion.cpp

HEADERS += \
        final.h \
    fijo.h \
    mainwindow.h \
    regresionlineal.h \
    nwrsn.h \
    derivacion.h \
    eli_gauss.h \
    euler_m.h \
    integracion.h

FORMS += \
        final.ui \
    fijo.ui \
    mainwindow.ui \
    nwrsn.ui \
    regresionlineal.ui \
    derivacion.ui \
    eli_gauss.ui \
    euler_m.ui \
    integracion.ui
