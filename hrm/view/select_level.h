#ifndef SELECT_LEVEL_H
#define SELECT_LEVEL_H

#include <QMainWindow>

namespace Ui {
class select_level;
}

class select_level : public QMainWindow
{
    Q_OBJECT

public:
    explicit select_level(QWidget *parent = nullptr);
    ~select_level();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::select_level *ui;
};

#endif // SELECT_LEVEL_H
