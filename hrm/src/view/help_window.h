#ifndef HELP_WINDOW_H
#define HELP_WINDOW_H

#include <QMainWindow>

namespace Ui {
class help_window;
}

class help_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit help_window(QWidget *parent = nullptr);
    ~help_window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::help_window *ui;
};

#endif // HELP_WINDOW_H
