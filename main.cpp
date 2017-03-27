#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include "log4qt/propertyconfigurator.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Log4Qt::PropertyConfigurator::configure(a.applicationDirPath()+ "/log4j.properties");


//    MainWindow w;
//    w.show();

    Login login;
    login.show();



    return a.exec();
}
