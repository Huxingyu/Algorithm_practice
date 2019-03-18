//素数表获取，直接法时间复杂度O(N*sqrt(N))
//10^5的范围可以接受

#include <stdio.h>
#include <math.h>

bool isPrime(int x){
    if(x<=1){
        return false;
    }
    int y=(int)sqrt(1.0 * x);
    for(int i=2;i<y;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int Prime[101],pNum=0;
bool P[101]={0};

void Find_Prime(){
    for(int i=1;i<100;i++){
        if(isPrime(i)==true){
            Prime[pNum++]=i;
            P[i]=true;
        }
    }
}

int main(){
    Find_Prime();
    for(int i=0;i<pNum;i++){
        printf("%d",Prime[i]);
    }
    return 0;
}