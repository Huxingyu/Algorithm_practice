//大数减法
//change,sub,_print

#include <stdio.h>
#include <string.h>

struct num{
    int d[1000];
    int cnt;
    num(){
        memset(d,0,sizeof(d));
        cnt=0;
    }
};

num change(char str[]){
    num x;
    x.cnt=strlen(str);
    for(int i=0;i<x.cnt;i++){
        x.d[i]=str[x.cnt-1-i]-'0';
    }
    return x;
}

num sub(num a,num b){
    num c;
    for(int i=0;i<a.cnt||i<b.cnt;i++){
        if(a.d[i]<b.d[i]){
            a.d[i+1]--;
            a.d[i]+=10;
        }
        c.d[c.cnt++]=a.d[i]-b.d[i];
    }
    while(c.cnt-1>=1 && c.d[c.cnt]==0){ //书上有错误？c.d[c.cnt-1]
        c.cnt--;
    }
    return c;
}

void _print(num x){
    for(int i=x.cnt-1;i>=0;i--){
        printf("%d",x.d[i]);
    }
}

int main(){
    char str1[1000],str2[1000];
    num one=change(str1);
    num two=change(str2);
    num y=sub(one,two);
    _print(y);
    return 0;
}