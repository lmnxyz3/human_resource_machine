#ifndef FINDNOTE_H
#define FINDNOTE_H

#include <QMainWindow>

namespace Ui {
class findnote;
}

class findnote : public QMainWindow
{
    Q_OBJECT

public:
    explicit findnote(QWidget *parent = 0);
    ~findnote();

private slots:
    void on_pushButton_clicked();

private:
    Ui::findnote *ui;
};

#endif // FINDNOTE_H
