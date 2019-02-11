#include <stdio.h>

void change(int a[],int b[][5]){
    for(int i=0;i<10;i++){
        a[i]=i;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            b[i][j]=j;
        }
    }
}

int main(){
    int a[10]={0};
    int b[3][5]={0};
    change(a,b);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//数组作为参数的时候，不带[]