#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QMessageBox>
#include "labelx.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    void rand_two(void);
    bool is_die(void);
    void up(void);
    void down(void);
    void left(void);
    void right(void);
    //同步数值数组的值到label
    void sync(void);
    bool is_move_merge; //是否移动的标记
    void keyPressEvent(QKeyEvent *event);
    void QMessageBoxxs(void);



private:
    Ui::Widget *ui;
    LabelX* lab[4][4]; //标签对象的数组
    int arr[4][4]={};  //数值的数组
//    int maxscore;
    int score;   //得分
    QMessageBox msgBox;
};

#endif // WIDGET_H
