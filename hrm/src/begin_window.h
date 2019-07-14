#ifndef BEGIN_WINDOW_H
#define BEGIN_WINDOW_H

#include <QMainWindow>

namespace Ui {
class begin_window;
}

class begin_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit begin_window(QWidget *parent = nullptr);
    ~begin_window();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::begin_window *ui;
};

#endif // BEGIN_WINDOW_H
