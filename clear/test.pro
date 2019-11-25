TEMPLATE = lib
CONFIG += console c++11
CONFIG -= lib_bundle
CONFIG -= qt
CONFIG += debug

SOURCES += \
    Terminal_Clear.cpp\
    main.cpp

HEADERS += \
    Terminal_Clear.hpp

DISTFILES += \
    Makefile
