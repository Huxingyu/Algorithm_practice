#include <stdio.h>

int cal(int n,int p){
    if(n<p){
        return 0;
    }
    return n/p+cal(n/p,p);  //这个地方加上else可以吗
}

int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    int ans=cal(n,p);
    printf("%d",ans);
    return 0;
}