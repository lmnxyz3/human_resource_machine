#ifndef ADDBOOKS_H
#define ADDBOOKS_H

#include <QMainWindow>

namespace Ui {
class addbooks;
}

class addbooks : public QMainWindow
{
    Q_OBJECT

public:
    explicit addbooks(QWidget *parent = 0);
    ~addbooks();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::addbooks *ui;
};

#endif // ADDBOOKS_H
