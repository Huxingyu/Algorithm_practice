//getchar,putchar

#include <stdio.h>

int main(){
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[i][j]=getchar();
        }
        getchar();
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            putchar(a[i][j]);
        }
        putchar('\n');
        //putchar '',not printf "". 
    }
    return 0;
}

/*int main(){
    char str[]="Hello,World!";
    for(int i=0;i<sizeof(str);i++){
        printf("%c",str[i]);
    }
    return 0;
}*/