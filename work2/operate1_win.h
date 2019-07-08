#ifndef OPERATE1_WIN_H
#define OPERATE1_WIN_H

#include <QMainWindow>


namespace Ui {
class operate1_win;
}

class operate1_win : public QMainWindow
{
    Q_OBJECT

public:
    explicit operate1_win(QWidget *parent = 0);
    ~operate1_win();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::operate1_win *ui;
};
extern QString u_id;
#endif // OPERATE1_WIN_H
