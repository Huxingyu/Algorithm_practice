#include <stdio.h>

void swap(int *x,int *y);

int main(){
    int a=1,b=2;
    printf("%d %d\n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

//函数声明