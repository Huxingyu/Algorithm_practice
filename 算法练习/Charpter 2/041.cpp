#include <stdio.h>



void fabs(int i){
    if(i>=0){
        printf(">=0\n");
    }
    else{
        printf("<0\n");
    }
}

int main(){
    int a[10]={0,1,2,3,4,5,6,7,8};
    for(int i=0;i<10;i++){
        fabs(a[i]);
    }
    return 0;
}
// 数组元素作为函数参数