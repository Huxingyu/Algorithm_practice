#include <stdio.h>

int mian(){
    int n;
    char x;
    scanf("%d %c",&n,&x);
    while(n>0){
        printf("%c",x);
        n--;
    }
    printf("\n");
    while(n-1>0){
        printf(" ");
    }
    printf("%c",x);
}