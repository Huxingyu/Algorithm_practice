#include <stdio.h>

typedef long long ll;

ll cal(ll n,ll m){
    ll ans=1;
    for(ll i=0;i<n;i++){
        ans *=i;
    }
    for(ll i=0;i<m;i++){
        ans /=i;
    }
    for(ll i=0;i<n-m;i++){
        ans /=i;
    }
    return ans;
}

int main(){
    ll n,m;
    scanf("%lld%lld",&n,&m);
    ll ans=cal(n,m);
    printf("%lld",ans);
    return 0;
}