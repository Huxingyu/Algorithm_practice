//快速幂迭代
#include <stdio.h>

typedef long long LL;

LL f(LL a,LL b){
    LL ans=1;
    while(b>0){
        if(b&1){    //(b&1)=(b%2=1)
            ans=ans*a;            
        }
        a=a*a;
        b>>=1;   //(b>>=1)=(b=b/2;)
    }
    return ans;
}

int main(){
    LL x,y,z;
    scanf("%lld %lld",&x,&y);
    z=f(x,y);
    printf("%lld",z);
    return 0;
}