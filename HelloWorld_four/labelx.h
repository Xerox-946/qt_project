#ifndef LABELX_H
#define LABELX_H

#include <QObject>
#include <QLabel>
#include <QWidget>

class LabelX : public QLabel
{
    Q_OBJECT
public:
    //初始化标签生成在parent空间中的第row行 第col列
    explicit LabelX(int row,int col,QWidget *parent = 0);

    //根据数值设置文字的样式
    void setValue(int num);
    ~LabelX();

signals:

public slots:
};

#endif // LABELX_H
