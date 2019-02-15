#include <stdio.h>

int main(){
    int a,b,q,x;
    int num[100];
    scanf("%d %d %d",&a,&b,&q);
    x=a+b;
    int i=0;
    do{
        num[i++]=x%q;
        x=x/q;
    }while(x!=0);
    printf("%d\n",i);
    while(--i>=0){ //这儿注意一下
        printf("%d",num[i]);
    }
    return 0;
}

//进制转换