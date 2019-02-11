//函数嵌套
#include <stdio.h>

int max2(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int max3(int a,int b,int c){
    int temp = max2(a,b);
    temp = max2(temp,c);
    return temp;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max3(a,b,c));
    return 0;
}