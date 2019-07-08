/********************************************************************************
** Form generated from reading UI file 'tips.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIPS_H
#define UI_TIPS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tips
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tips)
    {
        if (tips->objectName().isEmpty())
            tips->setObjectName(QStringLiteral("tips"));
        tips->resize(693, 521);
        centralwidget = new QWidget(tips);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 140, 651, 141));
        tips->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tips);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 693, 30));
        tips->setMenuBar(menubar);
        statusbar = new QStatusBar(tips);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        tips->setStatusBar(statusbar);

        retranslateUi(tips);

        QMetaObject::connectSlotsByName(tips);
    } // setupUi

    void retranslateUi(QMainWindow *tips)
    {
        tips->setWindowTitle(QApplication::translate("tips", "MainWindow", 0));
        textBrowser->setHtml(QApplication::translate("tips", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1.\347\231\273\345\275\225\346\227\266\357\274\214\344\274\232\346\240\271\346\215\256\350\264\246\346\210\267\350\272\253\344\273\275\350\207\252\345\212\250\345\206\263\345\256\232\346\211\223\345\274\200\347\256\241\347\220\206\345\221\230\350\277\230\346\230\257\346\231\256\351\200\232\347\224\250\346\210\267\347\225\214\351\235\242\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2.\345\233\240\344\270\272\347\256\241\347\220\206\345\221\230\345\222\214\346\231\256\351\200"
                        "\232\347\224\250\346\210\267\350\272\253\344\273\275\344\270\215\345\220\214\357\274\214\346\211\200\344\273\245\347\225\214\351\235\242\344\270\212\357\274\214\344\273\245\345\217\212\344\270\200\344\272\233\345\212\237\350\203\275\357\274\214\351\203\275\345\210\206\351\205\215\345\276\227\344\270\215\345\220\214\357\274\233</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3.\345\200\237\344\271\246\345\217\252\351\234\200\345\234\250\345\233\276\344\271\246\346\237\245\350\257\242\347\225\214\351\235\242\357\274\214\351\200\211\344\270\255\344\270\200\350\241\214\357\274\214\345\271\266\347\202\271\345\207\273\347\233\270\345\272\224\346\214\211\351\222\256\345\215\263\345\217\257\345\200\237\344\271\246\346\210\220\345\212\237\357\274\214\350\277\230\344\271\246\345\220\214\347\220\206\343\200\202</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class tips: public Ui_tips {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIPS_H
