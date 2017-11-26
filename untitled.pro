TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    listavertice.cpp \
    vertice.cpp \
    arista.cpp \
    listaaristas.cpp \
    grafo.cpp

HEADERS += \
    listavertice.h \
    vertice.h \
    arista.h \
    listaaristas.h \
    grafo.h
