#include "widget.h"
#include <QApplication>
#include <QLabel>
#include <time.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
//    srand(time(NULL));
//    w.rand_two();
//    w.sync();
//    while(1){
//        int dir=80;
//        w.is_move_merge=false;
//        if(w.is_die()){
//            //                system("cls");
//            printf("游戏结束！");
//            return 0;
//        }
//        if(72==dir){
//            //                system("cls");
//            w.up();
//            w.rand_two();
//            w.sync();
//            //                show_view();
//        }else if(80==dir){
//            //                system("cls");
//            w.down();
//            w.rand_two();
//            w.sync();
//            //                show_view();
//        }else if(75==dir){
//            //                system("cls");
//            w.left();
//            w.rand_two();
//            w.sync();
//            //                show_view();
//        }else if(77==dir){
//            //                system("cls");
//            w.right();
//            w.rand_two();
//            w.sync();
//            //                show_view();
//        }
//    }
    return a.exec();
}
