//高精度加法核心代码
//change函数，相加函数，输出函数（三位一体）
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
        x.d[i]=str[x.cnt-1-i]-'0';  //忘了之后减去'0'
    }
    return x;
}

num add(num a,num b){
    num c;
    int carry=0;
    for(int i=0;i<a.cnt||i<b.cnt;i++){
        int temp=a.d[i]+b.d[i]+carry;
        c.d[c.cnt++]=temp%10;
        carry=temp/10;
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
    scanf("%s%s",&str1,str2);
    num one=change(str1);
    num two=change(str2);
    _print(add(one,two));
    return 0;
}