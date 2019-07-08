/********************************************************************************
** Form generated from reading UI file 'findbook.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDBOOK_H
#define UI_FINDBOOK_H

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
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_findBook
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTableView *tableView;
    QComboBox *comboBox;
    QTextEdit *word1;
    QPushButton *push2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *findBook)
    {
        if (findBook->objectName().isEmpty())
            findBook->setObjectName(QStringLiteral("findBook"));
        findBook->resize(948, 567);
        centralwidget = new QWidget(findBook);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 150, 112, 34));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 210, 911, 291));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(170, 60, 151, 24));
        word1 = new QTextEdit(centralwidget);
        word1->setObjectName(QStringLiteral("word1"));
        word1->setGeometry(QRect(130, 100, 291, 41));
        push2 = new QPushButton(centralwidget);
        push2->setObjectName(QStringLiteral("push2"));
        push2->setGeometry(QRect(580, 150, 112, 34));
        findBook->setCentralWidget(centralwidget);
        menubar = new QMenuBar(findBook);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 948, 30));
        findBook->setMenuBar(menubar);
        statusbar = new QStatusBar(findBook);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        findBook->setStatusBar(statusbar);

        retranslateUi(findBook);

        QMetaObject::connectSlotsByName(findBook);
    } // setupUi

    void retranslateUi(QMainWindow *findBook)
    {
        findBook->setWindowTitle(QApplication::translate("findBook", "MainWindow", 0));
        pushButton->setText(QApplication::translate("findBook", "\346\237\245\346\211\276\344\271\246\347\261\215", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("findBook", "\346\237\245\346\211\276\346\211\200\346\234\211\344\271\246", 0)
         << QApplication::translate("findBook", "\346\214\211\347\261\273\345\210\253\346\237\245\350\257\242", 0)
         << QApplication::translate("findBook", "\346\214\211\344\271\246\345\220\215\346\237\245\350\257\242", 0)
         << QApplication::translate("findBook", "\346\214\211\345\207\272\347\211\210\347\244\276\346\237\245\350\257\242", 0)
         << QApplication::translate("findBook", "\346\214\211\345\271\264\344\273\275\346\237\245\350\257\242", 0)
         << QApplication::translate("findBook", "\346\214\211\344\275\234\350\200\205\346\237\245\350\257\242", 0)
         << QApplication::translate("findBook", "\346\214\211\344\273\267\346\240\274\346\237\245\350\257\242", 0)
        );
        push2->setText(QApplication::translate("findBook", "\345\200\237\344\271\246", 0));
    } // retranslateUi

};

namespace Ui {
    class findBook: public Ui_findBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDBOOK_H
