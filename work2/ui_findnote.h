/********************************************************************************
** Form generated from reading UI file 'findnote.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDNOTE_H
#define UI_FINDNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findnote
{
public:
    QWidget *centralwidget;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTableView *tableView;
    QTextEdit *word1;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *findnote)
    {
        if (findnote->objectName().isEmpty())
            findnote->setObjectName(QStringLiteral("findnote"));
        findnote->resize(737, 560);
        centralwidget = new QWidget(findnote);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(140, 20, 151, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(350, 60, 112, 34));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 120, 681, 371));
        word1 = new QTextEdit(centralwidget);
        word1->setObjectName(QStringLiteral("word1"));
        word1->setGeometry(QRect(110, 60, 221, 41));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(470, 20, 256, 71));
        findnote->setCentralWidget(centralwidget);
        menubar = new QMenuBar(findnote);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 30));
        findnote->setMenuBar(menubar);
        statusbar = new QStatusBar(findnote);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        findnote->setStatusBar(statusbar);

        retranslateUi(findnote);

        QMetaObject::connectSlotsByName(findnote);
    } // setupUi

    void retranslateUi(QMainWindow *findnote)
    {
        findnote->setWindowTitle(QApplication::translate("findnote", "MainWindow", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("findnote", "\346\237\245\346\211\276\346\211\200\346\234\211\350\256\260\345\275\225", 0)
         << QApplication::translate("findnote", "\346\214\211\344\271\246\345\220\215\346\237\245\346\211\276", 0)
         << QApplication::translate("findnote", "\346\214\211\347\224\250\346\210\267\345\220\215\346\237\245\346\211\276", 0)
         << QApplication::translate("findnote", "\346\214\211\346\230\257\345\220\246\350\277\230\344\271\246\346\237\245\346\225\260", 0)
        );
        pushButton->setText(QApplication::translate("findnote", "\346\211\276\350\256\260\345\275\225", 0));
        textBrowser->setHtml(QApplication::translate("findnote", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\275\223\350\272\253\344\273\275\344\270\272\347\224\250\346\210\267\346\227\266\357\274\214\345\217\252\346\230\276\347\244\272\347\224\250\346\210\267\345\220\215\344\270\272\350\207\252\345\267\261\347\232\204\345\200\237\344\271\246\350\256\260\345\275\225</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class findnote: public Ui_findnote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDNOTE_H
