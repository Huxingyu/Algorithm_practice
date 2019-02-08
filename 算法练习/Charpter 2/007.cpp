#include <stdio.h>

const int a=(1<<30)-1;
const int b=0x3fffffff;

int main(){
    if(a==b){
        printf("a=b");
    }
    else{
        printf("a!=b");
    }
    return 0;
}

//位运算符
//注意，判断是否相等时，应该用==，老问题了，记住
//等于号是用来赋值的