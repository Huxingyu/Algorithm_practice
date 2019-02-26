#include <stdio.h>

const int max=11;

int n,p[max],hashtable[max]={false};

void f(int x){
    if(x==n+1){  //if语句被执行了几次?
        for(int i=0;i<=n;i++){
            printf("%d",p[i]);
        }
        printf("\n");
        return;//中断函数
    }
    for(int j=1;j<=n;j++){      //j!=0
        if(hashtable[j]==false){
            p[x]=j;
            hashtable[j]==true;
            f(x+1);
            hashtable[j]=false;
        }
    }
}

int main(){
    n=3;
    f(1);
    return 0;
}

//这个算法计算全排列好像有些问题