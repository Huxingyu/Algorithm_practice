#include <stdio.h>

typedef long long ll;

ll cal(ll n,ll m){
    if(m==n||m==0){ //m==n==0?
        return 1;
    }
    else{
        return cal(n-1,m)+cal(n-1,m-1);
    }
}

int main(){
    ll n,m;
    scanf("%lld%lld",&n,&m);
    ll ans=cal(n,m);
    printf("%lld",ans);
    return 0;
}