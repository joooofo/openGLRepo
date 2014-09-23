QT += core opengl

TARGET = HelloOpenGL
TEMPLATE = app

SOURCES += \
    src\main.cpp \
    src\openglwindow.cpp \
    src\trianglewindow.cpp \
    src\changer.cpp

HEADERS += \
   include\openglwindow.h \
   include\trianglewindow.h \
   include\changer.h
