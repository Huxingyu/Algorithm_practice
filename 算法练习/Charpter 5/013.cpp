#include <stdio.h>
#include <string.h>

struct num{
    int d[1000];
    int len;
    //num(){};
    num(){
        memset(d,0,sizeof(d));  //初始化内存
        len=0;
    }
};

num change(char str[]){
    num x;
    x.len=strlen(str);
    for(int i=0;i<x.len;i++){
        x.d[i]=str[x.len-i-1]-'0';
    }
    return x;
}

int main(){
    //...
}