#include <stdio.h>

void change(int n[5]){
    for(int i=0;i<5;i++){
        if(n[i]<0){
            n[i]=0;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",n[i]);
    }
    printf("\n");
}

int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    change(a);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

//实参形参为同一数组
//在变量作函数参数时，所进行的值传送是单向的。即只能从实参传向形参，不能从形参传回实参。形参的初值和实参相同，而形参的值发生改变后，实参并不变化，两者的终值是不同的。而当用数组名作函数参数时，情况则不同。由于实际上形参和实参为同一数组，因此当形参数组发生变化时，实参数组也随之变化。
