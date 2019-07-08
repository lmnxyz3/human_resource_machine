/********************************************************************************
** Form generated from reading UI file 'operate2_win.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATE2_WIN_H
#define UI_OPERATE2_WIN_H

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

class Ui_operate2_win
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QTextBrowser *word1;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *operate2_win)
    {
        if (operate2_win->objectName().isEmpty())
            operate2_win->setObjectName(QStringLiteral("operate2_win"));
        operate2_win->resize(800, 600);
        centralwidget = new QWidget(operate2_win);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 20, 111, 121));
        graphicsView->setStyleSheet(QLatin1String("background-color: gainsboro;\n"
"border-image: url(:/image/tx.png)"));
        word1 = new QTextBrowser(centralwidget);
        word1->setObjectName(QStringLiteral("word1"));
        word1->setGeometry(QRect(130, 20, 171, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 210, 131, 34));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 300, 112, 34));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(370, 210, 112, 34));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(370, 300, 112, 34));
        operate2_win->setCentralWidget(centralwidget);
        menubar = new QMenuBar(operate2_win);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        operate2_win->setMenuBar(menubar);
        statusbar = new QStatusBar(operate2_win);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        operate2_win->setStatusBar(statusbar);

        retranslateUi(operate2_win);

        QMetaObject::connectSlotsByName(operate2_win);
    } // setupUi

    void retranslateUi(QMainWindow *operate2_win)
    {
        operate2_win->setWindowTitle(QApplication::translate("operate2_win", "\347\224\250\346\210\267\347\225\214\351\235\242", 0));
        pushButton->setText(QApplication::translate("operate2_win", "\346\237\245\346\211\276\345\233\276\344\271\246/\345\200\237\344\271\246", 0));
        pushButton_2->setText(QApplication::translate("operate2_win", "\350\277\230\344\271\246", 0));
        pushButton_3->setText(QApplication::translate("operate2_win", "\345\200\237\344\271\246\350\256\260\345\275\225", 0));
        pushButton_4->setText(QApplication::translate("operate2_win", "\347\224\250\346\210\267\351\241\273\347\237\245", 0));
    } // retranslateUi

};

namespace Ui {
    class operate2_win: public Ui_operate2_win {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATE2_WIN_H
