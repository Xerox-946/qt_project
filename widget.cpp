#include "widget.h"
#include "ui_widget.h"
#include<stdlib.h>
#include<time.h>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            lab[i][j]=new LabelX(i,j,ui->widget);
        }
    }
    srand(time(NULL));
    score=0;
    rand_two();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::rand_two()
{
    while(is_move_merge){
        int x=rand()%4;
        int y=rand()%4;
        if(arr[x][y]==0){
            arr[x][y]=2;
            sync();
            return;
        }
    }
}

bool Widget::is_die()
{
    for(int i=0;i<4;i++){
        for(int j=1;j<4;j++){
            if(arr[i][j-1]==arr[i][j]||arr[i][j]==0||arr[i][j-1]==0){
                return false;
            }
        }
    }
    for(int j=0;j<4;j++){
        for(int i=1;i<4;i++){
            if(arr[i-1][j]==arr[i][j]||arr[i][j]==0||arr[i-1][j]==0){
                return false;
            }
        }
    }
    return true;
}

void Widget::up()
{

    for(int j=0;j<4;j++){
        int end=0;
        for(int m=4;m>=1;m--){
            for(int i=1+end;i<m;i++){
                if(arr[i-1][j]==0){
                    arr[i-1][j]=arr[i][j];
                    is_move_merge=true;
                    arr[i][j]=0;
                }else if(arr[i-1][j]==arr[i][j]){
                    score+=arr[i][j];
                    char temp[10]={};
                    //把int类型的数据转换成字符串
                    sprintf(temp,"%d",score);
                    ui->label_21->setText(temp);
                    arr[i-1][j]*=2;
                    is_move_merge=true;
                    arr[i][j]=0;
                    end=i-1;
                }
            }
        }
    }
}

void Widget::down()
{
    for(int j=0;j<4;j++){
        int end=0;
        for(int m=0;m<4;m++){
            for(int i=2-end;i>=m;i--){
                if(arr[i+1][j]==0){
                    arr[i+1][j]=arr[i][j];
                    is_move_merge=true;
                    arr[i][j]=0;
                }else if(arr[i+1][j]==arr[i][j]){
                    score+=arr[i][j];
                    char temp[10]={};
                    //把int类型的数据转换成字符串
                    sprintf(temp,"%d",score);
                    ui->label_21->setText(temp);
                    arr[i+1][j]*=2;
                    is_move_merge=true;
                    arr[i][j]=0;
                    end=i+1;
                }
                //				else{
                //					is_move_merge=false;
                //				}
            }
        }
    }
}

void Widget::left()
{
    for(int i=0;i<4;i++){
        int end=0;
        for(int m=4;m>=1;m--){
            for(int j=1+end;j<m;j++){
                if(arr[i][j-1]==0){
                    arr[i][j-1]=arr[i][j];
                    is_move_merge=true;
                    arr[i][j]=0;
                }else if(arr[i][j-1]==arr[i][j]){
                    score+=arr[i][j];
                    char temp[10]={};
                    //把int类型的数据转换成字符串
                    sprintf(temp,"%d",score);
                    ui->label_21->setText(temp);
                    arr[i][j-1]*=2;
                    is_move_merge=true;
                    arr[i][j]=0;
                    end=j-1;
                }
                //				else{
                //					is_move_merge=false;
                //				}
            }
        }
    }
}

void Widget::right()
{
    for(int i=0;i<4;i++){
        int end=0;
        for(int m=0;m<4;m++){
            for(int j=2-end;j>=m;j--){
                if(arr[i][j+1]==0){
                    arr[i][j+1]=arr[i][j];
                    is_move_merge=true;
                    arr[i][j]=0;
                }else if(arr[i][j+1]==arr[i][j]){
                    score+=arr[i][j];
                    char temp[10]={};
                    //把int类型的数据转换成字符串
                    sprintf(temp,"%d",score);
                    ui->label_21->setText(temp);
                    arr[i][j+1]*=2;
                    is_move_merge=true;
                    arr[i][j]=0;
                    end=j+1;
                }
                //				else{
                //					is_move_merge=false;
                //				}
            }
        }
    }
}

void Widget::sync()
{
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            lab[i][j]->setValue(arr[i][j]);
            if(arr[i][j]==0){
                lab[i][j]->setText("");
            }else{
                char temp[10]={};
                //把int类型的数据转换成字符串
                sprintf(temp,"%d",arr[i][j]);
                lab[i][j]->setText(temp);
            }
        }
    }
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    is_move_merge=false;

    switch (event->key())
    {
    case Qt::Key_W : up(); break;
    case Qt::Key_S : down(); break;
    case Qt::Key_A : left(); break;
    case Qt::Key_D : right(); break;
    }
    rand_two();
    if(is_die()){
        QMessageBoxxs();
    }
}

void Widget::QMessageBoxxs()
{
    msgBox.setText("游戲結束了,小垃圾！");
    msgBox.resize(300,300);
    msgBox.setInformativeText("Do you want to again your games?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Save:
        // Save was clicked
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                lab[i][j]=0;
            }
        }
        rand_two();
        break;
    case QMessageBox::Cancel:
        // Cancel was clicked
        this->close();
        break;
    default:
        // should never be reached
        break;
    }
}
