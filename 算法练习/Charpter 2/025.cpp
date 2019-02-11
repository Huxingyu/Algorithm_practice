#include <stdio.h>

int x;

int change(int x){  //形参
    x = x + 1;
    return x;
}

int main(){
    x=10;
    change(x); //实参
    printf("%d",x);
    return 0;
}
