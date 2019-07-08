#ifndef ID_CONTROL_H
#define ID_CONTROL_H

#include <QMainWindow>

namespace Ui {
class id_control;
}

class id_control : public QMainWindow
{
    Q_OBJECT

public:
    explicit id_control(QWidget *parent = 0);
    ~id_control();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::id_control *ui;
};
extern int log_flag;
#endif // ID_CONTROL_H
