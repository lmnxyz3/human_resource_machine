/********************************************************************************
** Form generated from reading UI file 'addbook.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOK_H
#define UI_ADDBOOK_H

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

class Ui_addbook
{
public:
    QWidget *centralwidget;
    QTextEdit *word1;
    QTextEdit *word2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QTextEdit *word3;
    QTextEdit *word4;
    QTextBrowser *textBrowser_4;
    QTextBrowser *textBrowser_5;
    QTextEdit *word5;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_7;
    QTextBrowser *textBrowser_8;
    QTextEdit *word6;
    QTextEdit *word7;
    QTextEdit *word8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addbook)
    {
        if (addbook->objectName().isEmpty())
            addbook->setObjectName(QStringLiteral("addbook"));
        addbook->resize(566, 581);
        centralwidget = new QWidget(addbook);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        word1 = new QTextEdit(centralwidget);
        word1->setObjectName(QStringLiteral("word1"));
        word1->setGeometry(QRect(130, 10, 401, 41));
        word2 = new QTextEdit(centralwidget);
        word2->setObjectName(QStringLiteral("word2"));
        word2->setGeometry(QRect(130, 60, 401, 41));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 20, 71, 31));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(40, 70, 71, 31));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(40, 120, 71, 31));
        word3 = new QTextEdit(centralwidget);
        word3->setObjectName(QStringLiteral("word3"));
        word3->setGeometry(QRect(130, 120, 401, 41));
        word4 = new QTextEdit(centralwidget);
        word4->setObjectName(QStringLiteral("word4"));
        word4->setGeometry(QRect(130, 180, 401, 41));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(20, 190, 101, 31));
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(30, 240, 81, 31));
        word5 = new QTextEdit(centralwidget);
        word5->setObjectName(QStringLiteral("word5"));
        word5->setGeometry(QRect(130, 230, 401, 41));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(40, 300, 81, 31));
        textBrowser_7 = new QTextBrowser(centralwidget);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(50, 350, 61, 31));
        textBrowser_8 = new QTextBrowser(centralwidget);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(40, 410, 81, 31));
        word6 = new QTextEdit(centralwidget);
        word6->setObjectName(QStringLiteral("word6"));
        word6->setGeometry(QRect(140, 280, 381, 51));
        word7 = new QTextEdit(centralwidget);
        word7->setObjectName(QStringLiteral("word7"));
        word7->setGeometry(QRect(130, 340, 381, 41));
        word8 = new QTextEdit(centralwidget);
        word8->setObjectName(QStringLiteral("word8"));
        word8->setGeometry(QRect(130, 400, 391, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 470, 112, 34));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 470, 112, 34));
        addbook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addbook);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 566, 30));
        addbook->setMenuBar(menubar);
        statusbar = new QStatusBar(addbook);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        addbook->setStatusBar(statusbar);

        retranslateUi(addbook);

        QMetaObject::connectSlotsByName(addbook);
    } // setupUi

    void retranslateUi(QMainWindow *addbook)
    {
        addbook->setWindowTitle(QApplication::translate("addbook", "\345\215\225\345\206\214\345\233\276\344\271\246\345\205\245\345\272\223", 0));
        textBrowser->setHtml(QApplication::translate("addbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\271\246\345\217\267</p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("addbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\261\273\345\210\253</p></body></html>", 0));
        textBrowser_3->setHtml(QApplication::translate("addbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\271\246\345\220\215</p></body></html>", 0));
        textBrowser_4->setHtml(QApplication::translate("addbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\207\272\347\211\210\347\244\276</p></body></html>", 0));
        textBrowser_5->setHtml(QApplication::translate("addbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\271\264\344\273\275</p></body></html>", 0));
        textBrowser_6->setHtml(QApplication::translate("addbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\275\234\350\200\205</p></body></html>", 0));
        textBrowser_7->setHtml(QApplication::translate("addbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\273\267\346\240\274</p></body></html>", 0));
        textBrowser_8->setHtml(QApplication::translate("addbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\225\260\351\207\217</p></body></html>", 0));
        pushButton->setText(QApplication::translate("addbook", "\346\217\222\345\205\245", 0));
        pushButton_2->setText(QApplication::translate("addbook", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class addbook: public Ui_addbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOK_H
