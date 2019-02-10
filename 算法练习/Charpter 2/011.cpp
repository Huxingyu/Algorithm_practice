//try the function of "typedef"

#include <stdio.h>

typedef long long ll;

int main(){
    ll a = 11111111111111,b = 22222222222222;
    printf("%d\n",a+b);
    printf("%lld\n",a+b);
    return 0;
}