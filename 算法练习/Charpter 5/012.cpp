//大整数存储
//首先复习结构体的构造函数

#include <stdio.h>

struct point{
    int x,y;
    point(){};  //这个不要忘了加
    point(int _x,int _y){
        x=_x;   //这个赋值有意思
        y=_y;
    }
}pt[10];

//struct point pt[10];

int main(){
    int num=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            pt[num++]=point(i,j);
        }
    }
    for(int i=0;i<num;i++){
        printf("%d %d\n",pt[i].x,pt[i].y);
    }
    return 0;
}