/********************************************************************************
** Form generated from reading UI file 'checkcodeimage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKCODEIMAGE_H
#define UI_CHECKCODEIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckCodeImage
{
public:

    void setupUi(QWidget *CheckCodeImage)
    {
        if (CheckCodeImage->objectName().isEmpty())
            CheckCodeImage->setObjectName(QStringLiteral("CheckCodeImage"));
        CheckCodeImage->resize(100, 35);
        CheckCodeImage->setMinimumSize(QSize(100, 35));
        CheckCodeImage->setMaximumSize(QSize(100, 35));

        retranslateUi(CheckCodeImage);

        QMetaObject::connectSlotsByName(CheckCodeImage);
    } // setupUi

    void retranslateUi(QWidget *CheckCodeImage)
    {
        CheckCodeImage->setWindowTitle(QApplication::translate("CheckCodeImage", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CheckCodeImage: public Ui_CheckCodeImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKCODEIMAGE_H
