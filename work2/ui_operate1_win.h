/********************************************************************************
** Form generated from reading UI file 'operate1_win.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATE1_WIN_H
#define UI_OPERATE1_WIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_operate1_win
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QTextBrowser *word1;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *operate1_win)
    {
        if (operate1_win->objectName().isEmpty())
            operate1_win->setObjectName(QStringLiteral("operate1_win"));
        operate1_win->resize(733, 595);
        centralwidget = new QWidget(operate1_win);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 20, 111, 121));
        graphicsView->setStyleSheet(QLatin1String("background-color: gainsboro;\n"
"border-image: url(:/image/tx.png)"));
        word1 = new QTextBrowser(centralwidget);
        word1->setObjectName(QStringLiteral("word1"));
        word1->setGeometry(QRect(150, 20, 141, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 250, 131, 34));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 310, 121, 34));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 370, 112, 34));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 310, 151, 34));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 370, 121, 34));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 250, 112, 34));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(460, 250, 112, 34));
        operate1_win->setCentralWidget(centralwidget);
        menubar = new QMenuBar(operate1_win);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 733, 30));
        operate1_win->setMenuBar(menubar);
        statusbar = new QStatusBar(operate1_win);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        operate1_win->setStatusBar(statusbar);

        retranslateUi(operate1_win);

        QMetaObject::connectSlotsByName(operate1_win);
    } // setupUi

    void retranslateUi(QMainWindow *operate1_win)
    {
        operate1_win->setWindowTitle(QApplication::translate("operate1_win", "\347\256\241\347\220\206\345\221\230\347\225\214\351\235\242", 0));
        word1->setHtml(QApplication::translate("operate1_win", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton->setText(QApplication::translate("operate1_win", "\346\237\245\346\211\276\344\271\246\347\261\215/\345\200\237\344\271\246", 0));
        pushButton_2->setText(QApplication::translate("operate1_win", "\345\215\225\345\206\214\345\233\276\344\271\246\345\205\245\345\272\223", 0));
        pushButton_3->setText(QApplication::translate("operate1_win", "\345\242\236\345\212\240\347\256\241\347\220\206\345\221\230", 0));
        pushButton_4->setText(QApplication::translate("operate1_win", "\347\224\250\346\210\267\345\200\237\344\271\246\350\256\260\345\275\225", 0));
        pushButton_5->setText(QApplication::translate("operate1_win", "\346\211\271\351\207\217\345\233\276\344\271\246\345\205\245\345\272\223", 0));
        pushButton_6->setText(QApplication::translate("operate1_win", "\350\277\230\344\271\246", 0));
        pushButton_7->setText(QApplication::translate("operate1_win", "\345\200\237\344\271\246\350\257\201\347\256\241\347\220\206", 0));
    } // retranslateUi

};

namespace Ui {
    class operate1_win: public Ui_operate1_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATE1_WIN_H
