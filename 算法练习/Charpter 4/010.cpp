#include <stdio.h>

const int max=12;

int n,p[max],table[max]={false},

void f(int x){
    if(x==n+1){
        for(int i=0;i<=n;i++){
            printf("%d",p[i]);
        }
    }
    return; //这是啥意思？
    for(int j=0;j<=n;j++){
        if(table[j]==false){
            p[x]=j;
        }
        table[j]=true;
        f(x+1);
        table[j]=false;
    }
    return;
}

int main(){
    n=3;
    f(1); //从第一位开始
    return 0;
}