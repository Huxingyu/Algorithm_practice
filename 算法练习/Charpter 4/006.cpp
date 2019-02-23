#include <stdio.h>

int hash(char _str[],int _n){
    int n=0;
    for(int i=0;i<_n;i++){
        n=n*26+(_str[i]-'A');
    }
    return n;
}

int main(){
    char str[3]={'B','C','D'};
    int n=3;
    int x=hash(str,n);
    printf("%d",x);
    return 0;
}