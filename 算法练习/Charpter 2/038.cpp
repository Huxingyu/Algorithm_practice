#include <stdio.h>

struct hu{
    int x;
    int y;
    hu(){}
    hu(int _x,int _y){
        x = _x;
        y = _y;
    }
};

struct hu one[50];

int main(){
    int num=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            one[num++]=hu(i,j);
        }
    }
    for(int i=0;i<=num;i++){
        printf("%d,%d\n",one[i].x,one[i].y);
    }
    return 0;
}

//构造函数