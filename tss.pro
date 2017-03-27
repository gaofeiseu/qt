#-------------------------------------------------
#
# Project created by QtCreator 2017-03-21T14:10:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = tss
TEMPLATE = app


LIBS+= qrcodelib.lib
LIBS+= qrcodelib.dll


DEPENDPATH += .log4qt\
               log4qt/helpers \
               log4qt/spi \
               log4qt/varia
INCLUDEPATH += .log4qt\
                log4qt/helpers \
                log4qt/spi \
                log4qt/varia


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
        mainwindow.cpp \
    login.cpp \
    checkcodeimage.cpp \
    qrcodegenerate.cpp \
    log4qt/helpers/classlogger.cpp \
    log4qt/helpers/configuratorhelper.cpp \
    log4qt/helpers/datetime.cpp \
    log4qt/helpers/factory.cpp \
    log4qt/helpers/initialisationhelper.cpp \
    log4qt/helpers/logerror.cpp \
    log4qt/helpers/logobject.cpp \
    log4qt/helpers/logobjectptr.cpp \
    log4qt/helpers/optionconverter.cpp \
    log4qt/helpers/patternformatter.cpp \
    log4qt/helpers/properties.cpp \
    log4qt/spi/filter.cpp \
    log4qt/varia/debugappender.cpp \
    log4qt/varia/denyallfilter.cpp \
    log4qt/varia/levelmatchfilter.cpp \
    log4qt/varia/levelrangefilter.cpp \
    log4qt/varia/listappender.cpp \
    log4qt/varia/nullappender.cpp \
    log4qt/varia/stringmatchfilter.cpp \
    log4qt/appenderskeleton.cpp \
    log4qt/basicconfigurator.cpp \
    log4qt/consoleappender.cpp \
    log4qt/dailyrollingfileappender.cpp \
    log4qt/fileappender.cpp \
    log4qt/hierarchy.cpp \
    log4qt/layout.cpp \
    log4qt/level.cpp \
    log4qt/log4qt.cpp \
    log4qt/logger.cpp \
    log4qt/loggerrepository.cpp \
    log4qt/loggingevent.cpp \
    log4qt/logmanager.cpp \
    log4qt/mdc.cpp \
    log4qt/ndc.cpp \
    log4qt/patternlayout.cpp \
    log4qt/propertyconfigurator.cpp \
    log4qt/rollingfileappender.cpp \
    log4qt/simplelayout.cpp \
    log4qt/ttcclayout.cpp \
    log4qt/writerappender.cpp

HEADERS  += mainwindow.h \
    login.h \
    checkcodeimage.h \
    qrcodegenerate.h \
    log4qt/helpers/classlogger.h \
    log4qt/helpers/configuratorhelper.h \
    log4qt/helpers/datetime.h \
    log4qt/helpers/factory.h \
    log4qt/helpers/initialisationhelper.h \
    log4qt/helpers/logerror.h \
    log4qt/helpers/logobject.h \
    log4qt/helpers/logobjectptr.h \
    log4qt/helpers/optionconverter.h \
    log4qt/helpers/patternformatter.h \
    log4qt/helpers/properties.h \
    log4qt/spi/filter.h \
    log4qt/varia/debugappender.h \
    log4qt/varia/denyallfilter.h \
    log4qt/varia/levelmatchfilter.h \
    log4qt/varia/levelrangefilter.h \
    log4qt/varia/listappender.h \
    log4qt/varia/nullappender.h \
    log4qt/varia/stringmatchfilter.h \
    log4qt/appender.h \
    log4qt/appenderskeleton.h \
    log4qt/basicconfigurator.h \
    log4qt/consoleappender.h \
    log4qt/dailyrollingfileappender.h \
    log4qt/fileappender.h \
    log4qt/hierarchy.h \
    log4qt/layout.h \
    log4qt/level.h \
    log4qt/log4qt.h \
    log4qt/logger.h \
    log4qt/loggerrepository.h \
    log4qt/loggingevent.h \
    log4qt/logmanager.h \
    log4qt/mdc.h \
    log4qt/ndc.h \
    log4qt/patternlayout.h \
    log4qt/propertyconfigurator.h \
    log4qt/rollingfileappender.h \
    log4qt/simplelayout.h \
    log4qt/ttcclayout.h \
    log4qt/writerappender.h

FORMS    += mainwindow.ui \
    login.ui \
    checkcodeimage.ui \
    qrcodegenerate.ui

DISTFILES += \
    log4j.properties
