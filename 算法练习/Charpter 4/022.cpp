//快速幂递归
//计算a^b
//O(logb)
#include <stdio.h>
typedef long long LL;

int a,b,y;
LL f(LL a,LL b){
    if(b==0){
        return 1;
    }
    else if(b%2==0){
        LL temp=f(a,b/2);
        return temp*temp;   //这个地方有讲究       
    }
    else{
        return a*f(a,b-1);
    }
}

int main(){
    scanf("%d %d",&a,&b);
    LL y=f(a,b);
    printf("%lld",y);
    return 0;
}