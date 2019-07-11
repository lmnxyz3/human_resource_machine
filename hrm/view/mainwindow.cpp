#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"QStandardItemModel"
#include"qinputdialog.h"
#include"QString"
#include"QLabel"
#include"common/common.h"
#include"QSoundEffect"
#include <QPropertyAnimation>
#include<qdebug.h>
#include"QTimer"
#include<QSequentialAnimationGroup>
#include"QVector"
#include"QQueue"
int pos0,pos1;
int pin,pout;
bool carry;
QStandardItemModel *model = new QStandardItemModel();
extern QVector<QString> stringVector;
int iSel=0;
QSoundEffect *player=new QSoundEffect();
int on_play=-1;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QPixmap pixmap = QPixmap(":/resource/main0.jpg");
    QPalette  palette (this->palette());
    palette.setBrush(this->backgroundRole(),QBrush(pixmap.scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));
    this-> setPalette( palette );

    ui->setupUi(this);
    ui->textBrowser->setText(tips);
    ui->textBrowser->setStyleSheet("background-color:rgb(255, 252, 153);color:rgb(98, 90, 58);font-size:22px;");
    ui->pushButton_2->setStyleSheet("background-image:url(:/resource/button1.png)");
    ui->label->setStyleSheet("background-image:url(:/resource/man0.png)");
    ui->label->setContentsMargins(28,0,0,35);
    ui->label->setGeometry(155,420,68,68);
    ui->label_2->setStyleSheet("background-image:url(:/resource/box0.png)");
    ui->label_2->setContentsMargins(28,0,0,5);
    ui->label_2->setGeometry(260,490,70,70);
    ui->label_3->setStyleSheet("background-image:url(:/resource/box1.png)");
    ui->label_3->setContentsMargins(28,0,0,5);
    ui->label_3->setGeometry(330,490,70,70);
    ui->label_4->setStyleSheet("background-image:url(:/resource/box2.png)");
    ui->label_4->setContentsMargins(28,0,0,5);
    ui->label_4->setGeometry(400,490,70,70);
    ui->label_5->setStyleSheet("background-image:url(:/resource/box3.png)");
    ui->label_5->setContentsMargins(28,0,0,5);
    ui->label_5->setGeometry(260,560,70,70);
    ui->label_6->setStyleSheet("background-image:url(:/resource/box4.png)");
    ui->label_6->setContentsMargins(28,0,0,5);
    ui->label_6->setGeometry(330,560,70,70);
    ui->label_7->setStyleSheet("background-image:url(:/resource/box5.png)");
    ui->label_7->setContentsMargins(28,0,0,5);
    ui->label_7->setGeometry(400,560,70,70);
    ui->box1_0->hide();
    ui->box1_1->hide();
    ui->box1_2->hide();
    ui->box1_3->hide();
    ui->box1_4->hide();
    ui->box1_5->hide();
    ui->box2_1->hide();
    ui->box2_2->hide();
    ui->box2_3->hide();
    ui->box2_4->hide();
    ui->box2_5->hide();
    ui->box2_0->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}
void setheader(Ui::MainWindow *ui){
    model->clear();
    model->setColumnCount(1);
    QColor c;
    c.setRgb(0,120,215);
    model->setHeaderData(0,Qt::Horizontal,"command");
    QStandardItem* item = 0;
    for(int i=0;i<stringVector.size();i++){
        item = new QStandardItem(stringVector.at(i));
        model->setItem(i,0,item);
        model->item(i,0)->setTextAlignment(Qt::AlignCenter);
    }
    if(stringVector.size()!=0)model->item(iSel,0)->setBackground(QBrush(c));
    ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,220);
}


void MainWindow::on_pushButton_6_clicked()
{
    QString new_item;
    new_item="inbox";
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_7_clicked()
{
    QString new_item;
    new_item="outbox";
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString new_item;
    new_item="copyto ";
    QInputDialog *qinput=new QInputDialog();
    QString num_s=qinput->getText(this,"input","input copyto pos");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}


void MainWindow::on_pushButton_9_clicked()
{
    QString new_item;
    new_item="copyfrom ";
    QInputDialog *qinput=new QInputDialog();
    QString num_s=qinput->getText(this,"input","input copyfrom pos");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_10_clicked()
{
    QString new_item;
    new_item="add ";
    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input add pos");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}


void MainWindow::on_pushButton_11_clicked()
{
    QString new_item;
    new_item="sub ";
    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input sub pos");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_12_clicked()
{
    QString new_item;
    new_item="jump ";

    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input jump line");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_13_clicked()
{
    QString new_item;
    new_item="jump if zero ";
    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input jump line");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_14_clicked()
{
    QString new_item;
    new_item="jump if negative ";
    QInputDialog *qinput=new QInputDialog();

    QString num_s=qinput->getText(this,"input","input jump line");
    new_item=new_item+num_s;
    stringVector.push_back(new_item);
    iSel=stringVector.size()-1;
    setheader(ui);
}

void MainWindow::on_pushButton_17_clicked()
{
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    if(index.row()>=0)iSel = index.row();
    stringVector.remove(iSel);
    iSel=0;
    setheader(ui);
}

void MainWindow::on_pushButton_18_clicked()
{
    stringVector.clear();
    iSel=0;
    setheader(ui);
}

void MainWindow::on_pushButton_15_clicked()
{
    QString s1;
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    if(index.row()>=0)iSel = index.row();
    if(iSel==0)return;
    swap(stringVector[iSel],stringVector[iSel-1]);
    iSel--;
    setheader(ui);
}

void MainWindow::on_pushButton_16_clicked()
{
    QString s1;
    QModelIndex index=ui->tableView->selectionModel()->currentIndex();
    if(index.row()>=0)iSel = index.row();
    if(iSel>=stringVector.size()-1)return;
    swap(stringVector[iSel],stringVector[iSel+1]);
    iSel++;
    setheader(ui);
}


void MainWindow::on_pushButton_clicked()
{
    /* QPropertyAnimation *animation = new QPropertyAnimation(ui->label, "geometry");
    animation->setDuration(1000);
        //  设置动画的起始状态

        animation->setStartValue(QRect(155, 420, 68, 68));
        //  设置动画的结束状态
        animation->setKeyValueAt(1, QRect(520, 420, 68, 68));

        //  设置动画效果

        //  开始执行动画 QAbstractAnimation::DeleteWhenStopped 动画结束后进行自清理(效果就好像智能指针里的自动delete animation)
        animation->start(QAbstractAnimation::DeleteWhenStopped);
        */
    complete=1;
    this->close();
}



void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}
void MainWindow::box_move(common m_step)
{
    if(pin!=m_step.pin){
        for(int i=0;i<=5;i++){
            QString str = QString::number(m_step.in_box[m_step.pin+i]);
            if(i==0){
                if(m_step.pin+i>=inbox.size())ui->box1_0->hide();
                else{
                    ui->box1_0->setContentsMargins(15,0,0,5);
                    ui->box1_0->setText(str);
                    ui->box1_0->show();
                }
            }
            if(i==1){
                if(m_step.pin+i>=inbox.size())ui->box1_1->hide();
                else{
                    ui->box1_1->setContentsMargins(15,0,0,5);
                    ui->box1_1->setText(str);
                    ui->box1_1->show();
                }
            }
            if(i==2){
                if(m_step.pin+i>=inbox.size())ui->box1_2->hide();
                else{
                    ui->box1_2->setContentsMargins(15,0,0,5);
                    ui->box1_2->setText(str);
                    ui->box1_2->show();
                }
            }
            if(i==3){
                if(m_step.pin+i>=inbox.size())ui->box1_3->hide();
                else{
                    ui->box1_3->setContentsMargins(15,0,0,5);
                    ui->box1_3->setText(str);
                    ui->box1_3->show();
                }
            }
            if(i==4){
                if(m_step.pin+i>=inbox.size())ui->box1_4->hide();
                else{
                    ui->box1_4->setContentsMargins(15,0,0,5);
                    ui->box1_4->setText(str);
                    ui->box1_4->show();
                }
            }
            if(i==5){
                if(m_step.pin+i>=inbox.size())ui->box1_5->hide();
                else{
                    ui->box1_5->setContentsMargins(15,0,0,5);
                    ui->box1_5->setText(str);
                    ui->box1_5->show();
                }
            }
        }
    }
    if(pout!=m_step.pout){
        for(int i=0;i<=5;i++){
            QString str = QString::number(m_step.out_box[m_step.pout-1-i]);
            if(i==0){
                if(m_step.pout-1-i<0)ui->box2_0->hide();
                else{
                    ui->box2_0->setContentsMargins(15,0,0,5);
                    ui->box2_0->setText(str);
                    ui->box2_0->show();
                }
            }
            if(i==1){
                if(m_step.pout-1-i<0)ui->box2_1->hide();
                else {
                    ui->box2_1->setContentsMargins(15,0,0,5);
                    ui->box2_1->setText(str);
                    ui->box2_1->show();
                }
            }
            if(i==2){
                if(m_step.pout-1-i<0)ui->box2_2->hide();
                else{
                    ui->box2_2->setContentsMargins(15,0,0,5);
                    ui->box2_2->setText(str);
                    ui->box2_2->show();
                }
            }
            if(i==3){
                if(m_step.pout-1-i<0)ui->box2_3->hide();
                else{
                    ui->box2_3->setContentsMargins(15,0,0,5);
                    ui->box2_3->setText(str);
                    ui->box2_3->show();
                }
            }
            if(i==4){
                if(m_step.pout-1-i<0)ui->box2_4->hide();
                else{
                    ui->box2_4->setContentsMargins(15,0,0,5);
                    ui->box2_4->setText(str);
                    ui->box2_4->show();
                }
            }
            if(i==5){
                if(m_step.pout-1-i<0)ui->box2_5->hide();
                else{
                    ui->box2_5->setContentsMargins(15,0,0,5);
                    ui->box2_5->setText(str);
                    ui->box2_5->show();
                }
            }

        }
    }
    for(int i=0;i<6;i++){
        QString str = QString::number(m_step.copybox_item[i]);
        if(i==0){
            ui->label_2->setText("");
            if(m_step.copybox_flag[i])ui->label_2->setText(str);
        }
        if(i==1){
            ui->label_3->setText("");
            if(m_step.copybox_flag[i])ui->label_3->setText(str);
        }
        if(i==2){
            ui->label_4->setText("");
            if(m_step.copybox_flag[i])ui->label_4->setText(str);
        }
        if(i==3){
            ui->label_5->setText("");
            if(m_step.copybox_flag[i])ui->label_5->setText(str);
        }
        if(i==4){
            ui->label_6->setText("");
            if(m_step.copybox_flag[i])ui->label_6->setText(str);
        }
        if(i==5){
            ui->label_7->setText("");
            if(m_step.copybox_flag[i])ui->label_7->setText(str);
        }
    }
    pin=m_step.pin;pout=m_step.pout;

}
void MainWindow::human_move(common m_step)
{
    pos1=m_step.p->getpos();
    qDebug()<<pos0<<pos1;
    QPropertyAnimation *animation = new QPropertyAnimation(ui->label, "geometry");
    animation->setDuration(1000);
        /*  设置动画的起始状态   */
    if(pos0==my_left){
        animation->setStartValue(QRect(155, 420, 68, 68));
    }
    else if(pos0==my_mid){
        animation->setStartValue(QRect(337, 420, 68, 68));
    }
    else{
        animation->setStartValue(QRect(520, 420, 68, 68));
    }

        /*  设置动画的结束状态   */
    if(pos1==my_left){
        animation->setKeyValueAt(1,QRect(155, 420, 68, 68));
    }
    else if(pos1==my_mid){
        animation->setKeyValueAt(1,QRect(337, 420, 68, 68));
    }
    else{
        animation->setKeyValueAt(1,QRect(520, 420, 68, 68));
    }
    animation->start(QAbstractAnimation::DeleteWhenStopped);
    pos0=pos1;
    if(m_step.p->getcarry()!=carry){
        if(m_step.p->getcarry()==1){
            ui->label->setStyleSheet("background-image:url(:/resource/man1.png)");
            QString str = QString::number(m_step.p->getcontent());
            ui->label->setText(str);
        }
        else{
            ui->label->setStyleSheet("background-image:url(:/resource/man0.png)");
            ui->label->setText("");
        }
    }
    else if(carry){
        QString str = QString::number(m_step.p->getcontent());
        ui->label->setText(str);
    }
    carry=m_step.p->getcarry();
}

void MainWindow::move_step()
{
    human_move(m_move.front());
    box_move(m_move.front());
    QColor c,w;
    w.setRgb(255,255,255);
    c.setRgb(0,215,45);
    if(stringVector.size()!=0)model->item(iSel,0)->setBackground(QBrush(w));
    iSel=m_move.front().command_ptr;
    if(stringVector.size()!=0)model->item(iSel,0)->setBackground(QBrush(c));
    ui->tableView->setModel(model);
    m_move.pop_front();
}
void MainWindow::init_box()
{
    pos0=pos1=my_left;
    carry=false;
    complete=0;
    ifsuccess=0;
    pin=pout=0;
    for(int i=0;i<6&&i<inbox.size();i++){
        QString str = QString::number(inbox[i]);
        if(i==0){
            ui->box1_0->setContentsMargins(15,0,0,5);
            ui->box1_0->setText(str);
            ui->box1_0->show();
        }
        if(i==1){
            ui->box1_1->setContentsMargins(15,0,0,5);
            ui->box1_1->setText(str);
            ui->box1_1->show();
        }
        if(i==2){
            ui->box1_2->setContentsMargins(15,0,0,5);
            ui->box1_2->setText(str);
            ui->box1_2->show();
        }
        if(i==3){
            ui->box1_3->setContentsMargins(15,0,0,5);
            ui->box1_3->setText(str);
            ui->box1_3->show();
        }
        if(i==4){
            ui->box1_4->setContentsMargins(15,0,0,5);
            ui->box1_4->setText(str);
            ui->box1_4->show();
        }
        if(i==5){
            ui->box1_5->setContentsMargins(15,0,0,5);
            ui->box1_5->setText(str);
            ui->box1_5->show();
        }
    }
    ui->box2_0->hide();
    ui->box2_1->hide();
    ui->box2_2->hide();
    ui->box2_3->hide();
    ui->box2_4->hide();
    ui->box2_5->hide();
    if(stringVector.size()!=0)setheader(ui);
    player->setSource(QUrl::fromLocalFile(":/resource/music.wav"));
}
void MainWindow::on_pushButton_4_clicked()
{
    quit=1;
    this->close();
}
void MainWindow::init_mainwindow()
{
    pin=0;
    pout=0;
    pos0=0;pos1=0;
    carry=false;
    ui->label->setStyleSheet("background-image:url(:/resource/man0.png)");
    ui->label->setText("");
    ui->label->setGeometry(155, 420, 68, 68);
}

void MainWindow::on_pushButton_2_clicked()
{
    stop=1;
    this->close();
}

void MainWindow::on_pushButton_5_clicked()
{
    if(on_play==-1){
            player->setSource(QUrl::fromLocalFile(":/resource/music.wav"));
            player->setVolume(50);
            player->play();
            on_play=1;
        }

        else if(on_play==1){
            on_play=0;
            player->stop();
        }
        else if(on_play==0){
            on_play=1;
            player->play();
        }
}
