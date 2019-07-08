/********************************************************************************
** Form generated from reading UI file 'returnbook.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNBOOK_H
#define UI_RETURNBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_returnbook
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *returnbook)
    {
        if (returnbook->objectName().isEmpty())
            returnbook->setObjectName(QStringLiteral("returnbook"));
        returnbook->resize(708, 595);
        centralwidget = new QWidget(returnbook);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 60, 121, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 60, 112, 34));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 130, 441, 381));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(520, 60, 112, 34));
        returnbook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(returnbook);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 708, 30));
        returnbook->setMenuBar(menubar);
        statusbar = new QStatusBar(returnbook);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        returnbook->setStatusBar(statusbar);

        retranslateUi(returnbook);

        QMetaObject::connectSlotsByName(returnbook);
    } // setupUi

    void retranslateUi(QMainWindow *returnbook)
    {
        returnbook->setWindowTitle(QApplication::translate("returnbook", "MainWindow", 0));
        textBrowser->setHtml(QApplication::translate("returnbook", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\210\221\345\200\237\347\232\204\344\271\246\357\274\232</p></body></html>", 0));
        pushButton->setText(QApplication::translate("returnbook", "\345\210\267\346\226\260", 0));
        pushButton_2->setText(QApplication::translate("returnbook", "\350\277\230\344\271\246", 0));
    } // retranslateUi

};

namespace Ui {
    class returnbook: public Ui_returnbook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNBOOK_H
