//n!,穷举
//O(NlogN)
#include <stdio.h>

int cal(int x,int p){
    int ans=0;
    for(int i=2;i<=x;i++){  //不要忘记加入等号
        int temp=i;
        while(temp%p==0){
            ans++;
            temp/=p;   //这儿不能直接使用i，需要用到一个中间变量temp
        }
    }
    return ans;
}

int main(){
    int x,p;
    scanf("%d%d",&x,&p);
    int ans=cal(x,p);
    printf("%d",ans);
    return 0;
}