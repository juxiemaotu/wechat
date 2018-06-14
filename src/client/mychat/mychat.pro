#-------------------------------------------------
#
# Project created by QtCreator 2018-06-11T14:42:49
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mychat
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


SOURCES += main.cpp\
        login.cpp \
    letschat.cpp \
    showresult.cpp \
    register.cpp

HEADERS  += login.h \
    letschat.h \
    showresult.h \
    proto.h \
    register.h \
    ../../include/proto_mode.h

FORMS    += login.ui \
    letschat.ui \
    showresult.ui \
    register.ui
