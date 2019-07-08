/********************************************************************************
** Form generated from reading UI file 'log_win.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOG_WIN_H
#define UI_LOG_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_log_win
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QTextEdit *word1;
    QTextBrowser *textBrowser_2;
    QTextEdit *word2;
    QPushButton *pushButton;
    QTextBrowser *word3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *log_win)
    {
        if (log_win->objectName().isEmpty())
            log_win->setObjectName(QStringLiteral("log_win"));
        log_win->resize(510, 315);
        centralwidget = new QWidget(log_win);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(80, 140, 71, 31));
        word1 = new QTextEdit(centralwidget);
        word1->setObjectName(QStringLiteral("word1"));
        word1->setGeometry(QRect(230, 60, 201, 41));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(70, 70, 91, 31));
        word2 = new QTextEdit(centralwidget);
        word2->setObjectName(QStringLiteral("word2"));
        word2->setGeometry(QRect(230, 140, 201, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 210, 91, 41));
        word3 = new QTextBrowser(centralwidget);
        word3->setObjectName(QStringLiteral("word3"));
        word3->setGeometry(QRect(180, 10, 121, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 210, 101, 41));
        log_win->setCentralWidget(centralwidget);
        menubar = new QMenuBar(log_win);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 510, 30));
        log_win->setMenuBar(menubar);
        statusbar = new QStatusBar(log_win);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        log_win->setStatusBar(statusbar);

        retranslateUi(log_win);

        QMetaObject::connectSlotsByName(log_win);
    } // setupUi

    void retranslateUi(QMainWindow *log_win)
    {
        log_win->setWindowTitle(QApplication::translate("log_win", "\347\231\273\345\275\225/\346\263\250\345\206\214\347\225\214\351\235\242", 0));
        textBrowser->setHtml(QApplication::translate("log_win", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\257\206\347\240\201</p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("log_win", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\224\250\346\210\267\345\220\215</p></body></html>", 0));
        pushButton->setText(QApplication::translate("log_win", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("log_win", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class log_win: public Ui_log_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOG_WIN_H
