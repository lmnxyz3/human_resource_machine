#ifndef LOG_WIN_H
#define LOG_WIN_H

#include <QMainWindow>

namespace Ui {
class log_win;
}

class log_win : public QMainWindow
{
    Q_OBJECT

public:
    explicit log_win(QWidget *parent = 0);
    ~log_win();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::log_win *ui;
};

#endif // LOG_WIN_H
