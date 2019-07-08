/********************************************************************************
** Form generated from reading UI file 'id_control.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ID_CONTROL_H
#define UI_ID_CONTROL_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_id_control
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *id_control)
    {
        if (id_control->objectName().isEmpty())
            id_control->setObjectName(QStringLiteral("id_control"));
        id_control->resize(800, 600);
        centralwidget = new QWidget(id_control);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(110, 230, 481, 301));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 130, 112, 34));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 130, 112, 34));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 130, 112, 34));
        id_control->setCentralWidget(centralwidget);
        menubar = new QMenuBar(id_control);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 30));
        id_control->setMenuBar(menubar);
        statusbar = new QStatusBar(id_control);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        id_control->setStatusBar(statusbar);

        retranslateUi(id_control);

        QMetaObject::connectSlotsByName(id_control);
    } // setupUi

    void retranslateUi(QMainWindow *id_control)
    {
        id_control->setWindowTitle(QApplication::translate("id_control", "MainWindow", 0));
        pushButton->setText(QApplication::translate("id_control", "\346\237\245\346\211\276\345\200\237\344\271\246\350\257\201", 0));
        pushButton_2->setText(QApplication::translate("id_control", "\345\210\240\351\231\244\345\200\237\344\271\246\350\257\201", 0));
        pushButton_3->setText(QApplication::translate("id_control", "\345\242\236\345\212\240\345\200\237\344\271\246\350\257\201", 0));
    } // retranslateUi

};

namespace Ui {
    class id_control: public Ui_id_control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ID_CONTROL_H
