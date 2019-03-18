//素数判断
//直接可以想到的是O(N)时间复杂度的穷举，但是我们可以将它缩小到O(sqrt(N))
//数学原理：k*(N/k)=N

#include <stdio.h>
#include <math.h>

bool isPrime(int x){
    if(x<=1){
        return false;
    }
    int sqr = (int)sqrt(1.0*x);
    for(int i=2;i<sqr;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int x;
    scanf("%d",&x);
    bool y=isPrime(x);
    printf("%d",y);
    return 0;
}