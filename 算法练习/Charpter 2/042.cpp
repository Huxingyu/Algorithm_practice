#include <stdio.h>

int avg(int a[5]){
    int sum = 0;
    for(int i=0;i<5;i++){
    sum = sum+ a[i];
    }
    int b = sum/5;
    return b;
}

int mian(){
    int n[5];
    for(int i=0;i<5;i++){
        scanf("%d",&n[i]);
    }
    int a = avg(n);
    printf("%d",a);
}

//数组作为函数的参数时，填写其名称即可
//一个函数中的变量名称不得与数组名称相同