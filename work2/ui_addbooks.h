/********************************************************************************
** Form generated from reading UI file 'addbooks.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKS_H
#define UI_ADDBOOKS_H

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

class Ui_addbooks
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextEdit *word1;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *addbooks)
    {
        if (addbooks->objectName().isEmpty())
            addbooks->setObjectName(QStringLiteral("addbooks"));
        addbooks->resize(800, 600);
        centralwidget = new QWidget(addbooks);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(170, 10, 221, 41));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(530, 140, 256, 192));
        word1 = new QTextEdit(centralwidget);
        word1->setObjectName(QStringLiteral("word1"));
        word1->setGeometry(QRect(30, 76, 471, 441));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(600, 360, 112, 61));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(600, 450, 112, 34));
        addbooks->setCentralWidget(centralwidget);
        menubar = new QMenuBar(addbooks);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        addbooks->setMenuBar(menubar);
        statusbar = new QStatusBar(addbooks);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        addbooks->setStatusBar(statusbar);

        retranslateUi(addbooks);

        QMetaObject::connectSlotsByName(addbooks);
    } // setupUi

    void retranslateUi(QMainWindow *addbooks)
    {
        addbooks->setWindowTitle(QApplication::translate("addbooks", "MainWindow", 0));
        textBrowser->setHtml(QApplication::translate("addbooks", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\211\271\351\207\217\345\233\276\344\271\246\345\205\245\345\272\223</p></body></html>", 0));
        textBrowser_2->setHtml(QApplication::translate("addbooks", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\240\274\345\274\217\344\276\213\345\246\202\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">0002\357\274\214\347\247\221\345\271\273\357\274\214\346\265\201\346\265\252\345\234\260\347\220\203\357\274\214\351\225\277\346\261\237\346\226\207\350\211\272\345\207\272\347\211\210\347\244\276\357\274\2142008\357\274\214\345\210\230\346\205\210\346\254\243\357\274\21428\357\274\2145</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt"
                        "-block-indent:0; text-indent:0px;\">8\351\241\271\345\206\205\345\256\271\343\200\202\344\270\215\345\220\214\344\271\246\344\271\213\351\227\264\350\246\201\346\215\242\350\241\214\343\200\202</p></body></html>", 0));
        pushButton->setText(QApplication::translate("addbooks", "\347\241\256\345\256\232", 0));
        pushButton_2->setText(QApplication::translate("addbooks", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class addbooks: public Ui_addbooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKS_H
