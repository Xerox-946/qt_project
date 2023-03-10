#include "labelx.h"

LabelX::LabelX(int row,int col,QWidget *parent) : QLabel(parent)
{
    //设置背景色
    this->setStyleSheet("background-color: rgb(205, 193, 180);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    //設置大小
    this->resize((parent->width()-50)/4,(parent->height()-50)/4);
    this->move((this->width()+10)*col+10,(this->height()+10)*row+10);
    //设置一个居中
    this->setAlignment(Qt::AlignCenter);
}

void LabelX::setValue(int num)
{
    if(0==num){
        this->setStyleSheet("background-color: rgb(205, 193, 180);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(2==num){
        this->setStyleSheet("background-color: rgb(238, 228, 218);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(4==num){
        this->setStyleSheet("background-color: rgb(237, 224, 200);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(8==num){
        this->setStyleSheet("background-color: rgb(242, 177, 121);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(16==num){
        this->setStyleSheet("background-color: rgb(245, 149, 99);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(32==num){
        this->setStyleSheet("background-color: rgb(246, 124, 96);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(64==num){
        this->setStyleSheet("background-color: rgb(246, 94, 59);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(128==num){
        this->setStyleSheet("background-color: rgb(237, 207, 114);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(256==num){
        this->setStyleSheet("background-color: rgb(237, 204, 97);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(512==num){
        this->setStyleSheet("background-color: rgb(255, 185, 0);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(1024==num){
        this->setStyleSheet("background-color: rgb(255, 150, 0);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }else if(2048==num){
        this->setStyleSheet("background-color: rgb(237, 194, 95);color: rgb(255, 255, 255);border-radius:5px;font: 75 33pt \"Berlin Sans FB\";");
    }
}

LabelX::~LabelX()
{

}

