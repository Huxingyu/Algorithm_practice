#include <stdio.h>

int main(){
    int n=0;
    char str[100][100];
    while(scanf("%s",str[n])!=EOF){
        n++;
    }
    while(n>=0){
        printf("%s ",str[n]);
        n--;
    }
    return 0;
}

//二维字符数组这么好使