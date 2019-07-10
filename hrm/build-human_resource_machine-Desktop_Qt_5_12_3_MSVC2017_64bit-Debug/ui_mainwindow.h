/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QTableView *tableView;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1260, 930);
        MainWindow->setStyleSheet(QString::fromUtf8("#MainWindow {background-image:url(:/resource/main0.jpg);}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 830, 71, 71));
        pushButton->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/button0.png)"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 830, 71, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/button1.png)"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 830, 71, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/button2.png)"));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 840, 80, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/button3.png)"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 850, 61, 61));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/button4.png)"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(930, 220, 256, 581));
        tableView->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 162);\n"
"font-size:14px;"));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(770, 210, 101, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/inbox.png)"));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(760, 260, 121, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/outbox.png)"));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(770, 310, 91, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/copyto.png)"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(760, 360, 121, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/copyfrom.png)"));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(790, 420, 61, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/add.png)"));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(790, 470, 61, 41));
        pushButton_11->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/sub.png)"));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(780, 530, 81, 41));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/jump.png)"));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(770, 590, 111, 41));
        pushButton_13->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/jump_zero.png)"));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(750, 650, 151, 41));
        pushButton_14->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/jump_negative.png)"));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(930, 840, 51, 31));
        pushButton_15->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/back.png);\n"
"color:red;\n"
"font-size:13px;"));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(1000, 840, 51, 31));
        pushButton_16->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/back.png);\n"
"color:red;\n"
"font-size:13px;"));
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(1070, 840, 51, 31));
        pushButton_17->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/back.png);\n"
"color:red;\n"
"font-size:13px;"));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(1140, 840, 51, 31));
        pushButton_18->setStyleSheet(QString::fromUtf8("background-image:url(:/resource/back.png);\n"
"color:red;\n"
"font-size:13px;"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(930, 90, 256, 121));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 252, 153);\n"
"color:rgb(98, 90, 58);\n"
"font-size:16px;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 60, 51, 71));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        pushButton_10->setText(QString());
        pushButton_11->setText(QString());
        pushButton_12->setText(QString());
        pushButton_13->setText(QString());
        pushButton_14->setText(QString());
        pushButton_15->setText(QApplication::translate("MainWindow", "\344\270\212\347\247\273", nullptr));
        pushButton_16->setText(QApplication::translate("MainWindow", "\344\270\213\347\247\273", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:16px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:600;\">\345\217\226\345\207\272inbox\344\270\255\347\232\204\346\257\217\346\240\267\344\270\234\350\245\277\357\274\214\346\224\276\345\210\260outbox\344\270\255</span></p></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
