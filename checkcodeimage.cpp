#include "checkcodeimage.h"
#include "ui_checkcodeimage.h"

CheckCodeImage::CheckCodeImage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckCodeImage)
{
    ui->setupUi(this);

    codes<<"A"<<"B"<<"C"<<"D"<<"E"<<"F"<<"G"<<"H"<<"K"
          <<"L"<<"M"<<"N"<<"P"<<"Q"<<"R"<<"S"<<"T"<<"U"
           <<"V"<<"W"<<"X"<<"Y"<<"Z"<<"2"<<"3"<<"4"<<"5"
            <<"6"<<"7"<<"8"<<"9";

    connect(this,SIGNAL(clicked()),this,SLOT(repaint()));
}

QString CheckCodeImage::getCheckCode(){
    return checkCode;
}

int CheckCodeImage::getCheckCodeSize(){
    return checkCodeSize;
}

void CheckCodeImage::setCheckCodeSize(int size){
    checkCodeSize = size;
    emit clicked();
}

void CheckCodeImage::generateCheckCode(){
    QString ret = "";
    for(int i=0; i<checkCodeSize; i++)
    {
        ret += codes.at(qrand() % codes.size());
    }
    checkCode = ret;
}

void CheckCodeImage::mousePressEvent(QMouseEvent *event){
    event->accept();
    emit clicked();
}

void CheckCodeImage::paintEvent(QPaintEvent *event){
    generateCheckCode();
    Q_UNUSED(event);
    QPainter painter(this);
    QPen pen;
    pen.setStyle(Qt::DashLine);
    pen.setWidth(5);
    pen.setBrush(Qt::green);
    painter.setPen(pen);
    QFont font;
    font.setFamily("Microsoft YaHei");
    font.setPointSize(18);
    font.setItalic(true);
    painter.setFont(font);
    painter.drawText(rect(), Qt::AlignLeft, checkCode);
    painter.end();
}

CheckCodeImage::~CheckCodeImage()
{
    delete ui;
}
