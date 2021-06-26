# -------------------------------------------------
# Project created by QtCreator 2010-01-21T10:42:18
# -------------------------------------------------
QT += opengl \
    sql \
    script \
    xml \
    xmlpatterns
TARGET = Projeto_Regressao
TEMPLATE = app
SOURCES += main.cpp \
    regressao.cpp \
    Matriz.cpp \
    HillSuavizado.cpp \
    Gauss.cpp
HEADERS += regressao.h \
    Matriz.h \
    HillSuavizado.h \
    Gauss.h
FORMS += regressao.ui
