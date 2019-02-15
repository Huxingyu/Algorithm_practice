#include <stdio.h>

int main(){
    int row,col;
    char x;
    scanf("%d %c",&col,&x);
    for(int i=0;i<col;i++){
        printf("%c",x);
    }
    printf("\n");
    if(col%2==0){
        row=col/2;
    }
    else{
        row=(col+1)/2;
    }
    for(int i=1;i<row-2;i++){
        printf("%c",x);
        for(int j=0;j<col-2;j++){
            printf(" ");
        }
        printf("%c",x);
        printf("\n");
    }
    for(int i=0;i<col;i++){
        printf("%c",x);
    }
    return 0;
}