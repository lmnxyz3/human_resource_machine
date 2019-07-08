#ifndef TIPS_H
#define TIPS_H

#include <QMainWindow>

namespace Ui {
class tips;
}

class tips : public QMainWindow
{
    Q_OBJECT

public:
    explicit tips(QWidget *parent = 0);
    ~tips();

private:
    Ui::tips *ui;
};

#endif // TIPS_H
