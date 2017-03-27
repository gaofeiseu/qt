/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>
#include <qrcodegenerate.h>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QStackedWidget *login_stackedWidget;
    QWidget *login_page;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_3;
    QStackedWidget *login_style_stackedWidget;
    QWidget *account_login_page;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_5;
    QComboBox *account_comboBox;
    QLineEdit *checkCode_lineEdit;
    QLabel *label_6;
    QCommandLinkButton *account_login_commandLinkButton;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QFrame *frame;
    QWidget *phone_login_page;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QLineEdit *lineEdit_5;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;
    QCommandLinkButton *phone_login_commandLinkButton;
    QWidget *scan_login_page;
    QLabel *label_13;
    QrcodeGenerate *qrcode_widget;
    QWidget *findPassword_page;
    QWidget *resetPassword_page;
    QWidget *loginSettings_page;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(640, 480);
        Login->setMinimumSize(QSize(640, 480));
        Login->setMaximumSize(QSize(640, 480));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        Login->setFont(font);
        login_stackedWidget = new QStackedWidget(Login);
        login_stackedWidget->setObjectName(QStringLiteral("login_stackedWidget"));
        login_stackedWidget->setGeometry(QRect(0, 0, 641, 481));
        login_page = new QWidget();
        login_page->setObjectName(QStringLiteral("login_page"));
        radioButton_2 = new QRadioButton(login_page);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(140, 30, 89, 16));
        radioButton = new QRadioButton(login_page);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(40, 30, 89, 16));
        radioButton->setChecked(true);
        radioButton_3 = new QRadioButton(login_page);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(240, 30, 89, 16));
        login_style_stackedWidget = new QStackedWidget(login_page);
        login_style_stackedWidget->setObjectName(QStringLiteral("login_style_stackedWidget"));
        login_style_stackedWidget->setGeometry(QRect(20, 60, 601, 401));
        account_login_page = new QWidget();
        account_login_page->setObjectName(QStringLiteral("account_login_page"));
        label = new QLabel(account_login_page);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(91, 50, 51, 16));
        comboBox = new QComboBox(account_login_page);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 50, 301, 22));
        comboBox->setEditable(false);
        label_2 = new QLabel(account_login_page);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 150, 61, 16));
        lineEdit = new QLineEdit(account_login_page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 150, 301, 20));
        label_5 = new QLabel(account_login_page);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 100, 61, 16));
        account_comboBox = new QComboBox(account_login_page);
        account_comboBox->setObjectName(QStringLiteral("account_comboBox"));
        account_comboBox->setGeometry(QRect(150, 100, 301, 22));
        account_comboBox->setEditable(true);
        checkCode_lineEdit = new QLineEdit(account_login_page);
        checkCode_lineEdit->setObjectName(QStringLiteral("checkCode_lineEdit"));
        checkCode_lineEdit->setGeometry(QRect(150, 200, 191, 20));
        label_6 = new QLabel(account_login_page);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(67, 200, 71, 16));
        account_login_commandLinkButton = new QCommandLinkButton(account_login_page);
        account_login_commandLinkButton->setObjectName(QStringLiteral("account_login_commandLinkButton"));
        account_login_commandLinkButton->setGeometry(QRect(250, 290, 91, 41));
        checkBox = new QCheckBox(account_login_page);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(300, 250, 71, 16));
        checkBox_2 = new QCheckBox(account_login_page);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(380, 250, 71, 16));
        checkBox_3 = new QCheckBox(account_login_page);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(220, 250, 71, 16));
        frame = new QFrame(account_login_page);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(350, 190, 100, 35));
        frame->setMinimumSize(QSize(100, 35));
        frame->setMaximumSize(QSize(100, 35));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        login_style_stackedWidget->addWidget(account_login_page);
        phone_login_page = new QWidget();
        phone_login_page->setObjectName(QStringLiteral("phone_login_page"));
        label_8 = new QLabel(phone_login_page);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 78, 54, 12));
        lineEdit_4 = new QLineEdit(phone_login_page);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 74, 271, 20));
        label_9 = new QLabel(phone_login_page);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(96, 125, 71, 16));
        lineEdit_5 = new QLineEdit(phone_login_page);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(190, 125, 161, 20));
        label_10 = new QLabel(phone_login_page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(390, 126, 61, 16));
        label_11 = new QLabel(phone_login_page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(95, 175, 71, 20));
        lineEdit_6 = new QLineEdit(phone_login_page);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(190, 177, 161, 20));
        pushButton = new QPushButton(phone_login_page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 175, 101, 23));
        phone_login_commandLinkButton = new QCommandLinkButton(phone_login_page);
        phone_login_commandLinkButton->setObjectName(QStringLiteral("phone_login_commandLinkButton"));
        phone_login_commandLinkButton->setGeometry(QRect(250, 250, 91, 41));
        login_style_stackedWidget->addWidget(phone_login_page);
        scan_login_page = new QWidget();
        scan_login_page->setObjectName(QStringLiteral("scan_login_page"));
        label_13 = new QLabel(scan_login_page);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(170, 300, 211, 16));
        qrcode_widget = new QrcodeGenerate(scan_login_page);
        qrcode_widget->setObjectName(QStringLiteral("qrcode_widget"));
        qrcode_widget->setGeometry(QRect(170, 20, 250, 250));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qrcode_widget->sizePolicy().hasHeightForWidth());
        qrcode_widget->setSizePolicy(sizePolicy);
        qrcode_widget->setMinimumSize(QSize(250, 250));
        qrcode_widget->setMaximumSize(QSize(250, 250));
        qrcode_widget->setStyleSheet(QStringLiteral(""));
        login_style_stackedWidget->addWidget(scan_login_page);
        login_stackedWidget->addWidget(login_page);
        findPassword_page = new QWidget();
        findPassword_page->setObjectName(QStringLiteral("findPassword_page"));
        login_stackedWidget->addWidget(findPassword_page);
        resetPassword_page = new QWidget();
        resetPassword_page->setObjectName(QStringLiteral("resetPassword_page"));
        login_stackedWidget->addWidget(resetPassword_page);
        loginSettings_page = new QWidget();
        loginSettings_page->setObjectName(QStringLiteral("loginSettings_page"));
        login_stackedWidget->addWidget(loginSettings_page);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, radioButton_3);
        QWidget::setTabOrder(radioButton_3, comboBox);
        QWidget::setTabOrder(comboBox, account_comboBox);
        QWidget::setTabOrder(account_comboBox, lineEdit);
        QWidget::setTabOrder(lineEdit, checkCode_lineEdit);
        QWidget::setTabOrder(checkCode_lineEdit, account_login_commandLinkButton);
        QWidget::setTabOrder(account_login_commandLinkButton, checkBox_3);
        QWidget::setTabOrder(checkBox_3, checkBox);
        QWidget::setTabOrder(checkBox, checkBox_2);

        retranslateUi(Login);

        login_style_stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "\346\254\242\350\277\216\344\275\277\347\224\250\344\270\255\345\233\275\347\224\265\344\277\241\347\262\276\345\223\201\346\270\240\351\201\223\347\273\210\347\253\257\351\224\200\345\224\256\347\263\273\347\273\237", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("Login", "\346\211\213\346\234\272\347\231\273\345\275\225", Q_NULLPTR));
        radioButton->setText(QApplication::translate("Login", "\350\264\246\345\217\267\347\231\273\345\275\225", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("Login", "\346\211\253\347\240\201\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "\346\234\215\345\212\241\345\231\250\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "\347\231\273\345\275\225\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("Login", "\347\231\273\345\275\225\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("Login", "\345\233\276\345\275\242\351\252\214\350\257\201\347\240\201\357\274\232", Q_NULLPTR));
        account_login_commandLinkButton->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
        checkBox->setText(QApplication::translate("Login", "\350\256\260\344\275\217\350\264\246\345\217\267", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("Login", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        checkBox_3->setText(QApplication::translate("Login", "\346\230\276\347\244\272\345\257\206\347\240\201", Q_NULLPTR));
        label_8->setText(QApplication::translate("Login", "\346\211\213\346\234\272\345\217\267\357\274\232", Q_NULLPTR));
        label_9->setText(QApplication::translate("Login", "\345\233\276\345\275\242\351\252\214\350\257\201\347\240\201\357\274\232", Q_NULLPTR));
        label_10->setText(QApplication::translate("Login", "\345\233\276\345\275\242\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("Login", "\347\237\255\344\277\241\351\252\214\350\257\201\347\240\201\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Login", "\350\216\267\345\217\226\347\237\255\344\277\241\351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        phone_login_commandLinkButton->setText(QApplication::translate("Login", "\347\231\273\345\275\225", Q_NULLPTR));
        label_13->setText(QApplication::translate("Login", "\346\217\220\347\244\272\346\226\207\345\255\227\357\274\232\345\275\223\345\211\215\351\252\214\350\257\201\347\240\201\345\260\206\345\234\25060\347\247\222\345\220\216\350\277\207\346\234\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
