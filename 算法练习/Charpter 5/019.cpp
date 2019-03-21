//n!

#include <stdio.h>

int cal(int n,int p){   //很漂亮的写法
    int num=0;
    while(n){
        num+=n/p;
        n/=p;
    }
    return num;
}

int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    int ans=cal(n,p);
    printf("%d",ans);
    return 0;
}