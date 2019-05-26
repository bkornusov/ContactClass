TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
QT += core
QT += widgets
QMAKE_MAC_SDK += macosx
CONFIG += pullout

INCLUDEPATH += usr/lib/TrollTech/Qt-5.12.2/bin:$PATH

SOURCES += \
        main.cpp \
    contactlist.cpp

HEADERS += \
    contactlist.h \
    contact.h \
    contactfactory.h
