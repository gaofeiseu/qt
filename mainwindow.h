#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#ifdef _MSC_VER
#pragma execution_character_set("utf-8")
#endif


#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
