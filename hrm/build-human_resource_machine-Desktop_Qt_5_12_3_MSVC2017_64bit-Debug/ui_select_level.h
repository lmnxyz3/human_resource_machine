/********************************************************************************
** Form generated from reading UI file 'select_level.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECT_LEVEL_H
#define UI_SELECT_LEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_select_level
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QMainWindow *select_level)
    {
        if (select_level->objectName().isEmpty())
            select_level->setObjectName(QString::fromUtf8("select_level"));
        select_level->resize(800, 600);
        select_level->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/back1.png);"));
        centralwidget = new QWidget(select_level);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(70, 60, 59, 59));
        pushButton->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/g.png);\n"
"font: 14pt \"Arial\";\n"
"color:rgb(95, 91, 67)"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(220, 60, 59, 59));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/g.png);\n"
"font: 14pt \"Arial\";\n"
"color:rgb(95, 91, 67);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(380, 60, 59, 59));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/g.png);\n"
"font: 14pt \"Arial\";\n"
"color:rgb(95, 91, 67);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(540, 60, 59, 59));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/g.png);\n"
"font: 14pt \"Arial\";\n"
"color:rgb(95, 91, 67);"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(690, 60, 59, 59));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/g.png);\n"
"font: 14pt \"Arial\";\n"
"color:rgb(95, 91, 67);"));
        select_level->setCentralWidget(centralwidget);

        retranslateUi(select_level);

        QMetaObject::connectSlotsByName(select_level);
    } // setupUi

    void retranslateUi(QMainWindow *select_level)
    {
        select_level->setWindowTitle(QApplication::translate("select_level", "select_level", nullptr));
        pushButton->setText(QApplication::translate("select_level", "1", nullptr));
        pushButton_2->setText(QApplication::translate("select_level", "2", nullptr));
        pushButton_3->setText(QApplication::translate("select_level", "3", nullptr));
        pushButton_4->setText(QApplication::translate("select_level", "4", nullptr));
        pushButton_5->setText(QApplication::translate("select_level", "5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class select_level: public Ui_select_level {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECT_LEVEL_H
