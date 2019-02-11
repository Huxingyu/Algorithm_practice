//指针作为函数参数，可以改变数组元素
#include <stdio.h>

void change(int *p){
    *p=233;
}

int main(){
    int a[10]={0,1,2,3,4,5};
    change(a+3);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}