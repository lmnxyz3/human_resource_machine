#ifndef OPERATE2_WIN_H
#define OPERATE2_WIN_H

#include <QMainWindow>

namespace Ui {
class operate2_win;
}

class operate2_win : public QMainWindow
{
    Q_OBJECT

public:
    explicit operate2_win(QWidget *parent = 0);
    ~operate2_win();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::operate2_win *ui;
};
extern QString u_id;

#endif // OPERATE2_WIN_H
