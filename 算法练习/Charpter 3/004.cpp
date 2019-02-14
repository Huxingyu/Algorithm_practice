#include <stdio.h>

int main(){
    int n;
    char x;
    scanf("%d %c",&n,&x);
    for(int i=0;i<n;i++){
        printf("%c",x);
    }
    printf("\n");
    for(int i=0;i<n/2-2;i++){
        printf("%c",x);
        for(int j=0;j<2*n-3;j++){
            printf(" ");
        }
        printf("%c",x);
        printf("\n");
    }
    for(int i=0;i<n;i++){
        printf("%c",x);
    }
    printf("\n");
    return 0;
}