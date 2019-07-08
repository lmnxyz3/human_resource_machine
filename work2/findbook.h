#ifndef FINDBOOK_H
#define FINDBOOK_H

#include <QMainWindow>

namespace Ui {
class findBook;
}

class findBook : public QMainWindow
{
    Q_OBJECT

public:
    explicit findBook(QWidget *parent = 0);
    ~findBook();

private slots:
    void on_pushButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_push2_clicked();

public:
    Ui::findBook *ui;
};

#endif // FINDBOOK_H
