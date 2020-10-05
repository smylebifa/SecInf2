#-------------------------------------------------
#
# Project created by QtCreator 2020-07-03T21:54:04
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Unit1
TEMPLATE = app

SOURCES += main.cpp\
        unit1.cpp \
    passworddialog.cpp \
    changepassword.cpp \
    adduser.cpp \
    editusers.cpp \
    about.cpp \
    decryption.cpp \
    SimpleCrypt.cpp

HEADERS  += unit1.h \
    passworddialog.h \
    changepassword.h \
    adduser.h \
    editusers.h \
    about.h \
    decryption.h \
    SimpleCrypt.h

FORMS    += unit1.ui \
    passworddialog.ui \
    changepassword.ui \
    adduser.ui \
    editusers.ui \
    about.ui \
    decryption.ui

CONFIG += qt

INCLUDEPATH += C:/OpenSSL-Win32/include
