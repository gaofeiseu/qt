#ifndef CHECKCODEIMAGE_H
#define CHECKCODEIMAGE_H

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif


#include <QWidget>
#include <QPainter>
#include <QPen>
#include <QString>
#include <QMouseEvent>

namespace Ui {
class CheckCodeImage;
}

class CheckCodeImage : public QWidget
{
    Q_OBJECT

public:
    explicit CheckCodeImage(QWidget *parent = 0);
    ~CheckCodeImage();

    QString checkCode;

    int checkCodeSize = 4;

    void setCheckCodeSize(int size);

signals:

    void clicked();

protected:

    void paintEvent(QPaintEvent *event);

    void mousePressEvent(QMouseEvent *event);

private:
    Ui::CheckCodeImage *ui;

    QList<QString> codes;

    QString getCheckCode();

    void generateCheckCode();

    int getCheckCodeSize();

};

#endif // CHECKCODEIMAGE_H
