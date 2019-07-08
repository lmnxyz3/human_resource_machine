#ifndef RETURNBOOK_H
#define RETURNBOOK_H

#include <QMainWindow>

namespace Ui {
class returnbook;
}

class returnbook : public QMainWindow
{
    Q_OBJECT

public:
    explicit returnbook(QWidget *parent = 0);
    ~returnbook();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::returnbook *ui;
};

#endif // RETURNBOOK_H
