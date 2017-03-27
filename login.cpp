#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    setWindowFlags(Qt::WindowCloseButtonHint);//隐藏帮助按钮

    initLoginTypeRadioBtns();
    initConnectForLoginTypeRadioButton();

    ui->lineEdit->setEchoMode(QLineEdit::Password);//将密码输入lineEdit变为密码输入样式
    ui->lineEdit->setClearButtonEnabled(true);//当lineEdit有输入内容时，显示清除按钮
    connect(ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(switchPasswordInputStyle()));

    initCheckCodeImage();




}
/**
 * @brief 封装三种登录方式的radio按钮，方便后面使用
 */
void Login::initLoginTypeRadioBtns(){
    loginTypeRadioBtns.append(ui->radioButton);
    loginTypeRadioBtns.append(ui->radioButton_2);
    loginTypeRadioBtns.append(ui->radioButton_3);
}
/**
 * @brief 登录方式界面切换SLOT
 */
void Login::switchLoginTypeStackedWidget(){
    QRadioButton *btn = qobject_cast<QRadioButton*>(sender());
    int index = loginTypeRadioBtns.indexOf(btn);
    if(loginTypeTabIndex != index){
        if(index == 2){
            //二维码登录界面，初始化二维码内容
            QString qrcodeStr = "http://www.baidu.com/" + QString::number(QDateTime::currentMSecsSinceEpoch() , 10);
            ui->qrcode_widget->generateString(qrcodeStr);
            qDebug()<<qrcodeStr;

        }

        ui->login_style_stackedWidget->setCurrentIndex(index);
        loginTypeTabIndex = index;
    }
}
/**
 * @brief 初始化登录方式Radio按钮的槽函数
 */
void Login::initConnectForLoginTypeRadioButton(){
    for(int i=0;i<loginTypeRadioBtns.count();i++){
        QRadioButton *btn = loginTypeRadioBtns.at(i);
        connect(btn,SIGNAL(clicked(bool)),this,SLOT(switchLoginTypeStackedWidget()));
    }
}

/**
 * @brief Login::switchPasswordInputStyle
 * SLOT
 * 是否显示密码明文
 */
void Login::switchPasswordInputStyle(){
    if(!ui->checkBox_3->isChecked()){
        ui->lineEdit->setEchoMode(QLineEdit::Password);
    }else{
        ui->lineEdit->setEchoMode(QLineEdit::Normal);
    }
}

/**
 * @brief Login::initCheckCodeImage
 * 初始化验证码图片
 */
void Login::initCheckCodeImage(){
    CheckCodeImage *checkCodeImage = new CheckCodeImage();
    //checkCodeImage->setCheckCodeSize(5);//可以设置验证码长度
    QHBoxLayout *hboxLayout = new QHBoxLayout();
    hboxLayout->setMargin(0);
    hboxLayout->setSpacing(1);
    hboxLayout->addWidget(checkCodeImage);
    ui->frame->setLayout(hboxLayout);
}



void Login::paintEvent(QPaintEvent *event){




}



Login::~Login()
{
    delete ui;
}
