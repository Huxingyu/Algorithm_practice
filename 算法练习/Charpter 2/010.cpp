//try three ways of "print"

#include <stdio.h>

int main(){
    double a=8.88;
    int b=88;
    printf("%5d\n",b);
    printf("%05d\n",b);
    printf("%.5f",a);
    return 0;
}