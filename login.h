#ifndef LOGIN_H
#define LOGIN_H

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif

#include <QDialog>
#include <QRadioButton>
#include <QPainter>
#include <QPen>
#include <QHBoxLayout>
#include <checkcodeimage.h>
#include <QDateTime>
#include <QDebug>
#include "log4qt/logger.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT
    LOG4QT_DECLARE_QCLASS_LOGGER

public:
    explicit Login(QWidget *parent = 0);
    ~Login();




protected:
    void paintEvent(QPaintEvent *event);

private:
    Ui::Login *ui;



    QList<QRadioButton*> loginTypeRadioBtns;
    int loginTypeTabIndex = -1;



    void initLoginTypeRadioBtns();
    void initConnectForLoginTypeRadioButton();

    void initCheckCodeImage();





private slots:

    void switchLoginTypeStackedWidget();

    void switchPasswordInputStyle();

};

#endif // LOGIN_H
