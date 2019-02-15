#include <stdio.h>
#include <string.h>

char str[81];

void change(char _str[]){
    int n=strlen( _str);
    for(int i=0;i<n;i++){
        printf("%c",str[n-1-i]);
    }
}

int main(){
    gets(str);
    change(str);
    return 0;
}