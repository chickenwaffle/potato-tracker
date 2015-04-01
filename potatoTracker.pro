TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++0x -g

SOURCES += main.cpp \
    potato.cpp \
    command.cpp

HEADERS += \
    potato.h \
    command.h

