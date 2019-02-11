#include <stdio.h>

int main(){
    char str1[20];//1
    char str2[5][10];
    gets(str1);
    for(int i=0;i<3;i++){
        gets(str2[i]);
    }
    puts(str1);
    for(int i=0;i<3;i++){
        puts(str2[i]);
    }
    return 0;
}

//gets,puts.
//1处str[]中的规定字符数，有点意思