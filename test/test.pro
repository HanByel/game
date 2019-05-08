TEMPLATE = lib
CONFIG += console c++11
CONFIG -= lib_bundle
CONFIG -= qt
CONFIG += debug

SOURCES += \
    control_IO.cpp\
    main.cpp

HEADERS += \
    control_IO.hpp

DISTFILES += \
    Makefile
