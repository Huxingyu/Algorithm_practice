//质因子分解，时间复杂度O(logN)
//需要用到素数表以及因子判断

#include <stdio.h>
#include <math.h>
const int max=100010;

bool is_Prime(int x){
    if(x==1){
        return false;
    }
    int sqr=(int)sqrt(1.0 * x);
    for(int i=2;i<sqr;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}

int Prime[max],pNum=0;
bool p[max]={0};

void Find_Prime(int x){
    for(int i=1;i<=x;i++){
        if(is_Prime(i)==true){
            Prime[pNum++]=i;
        }
    }
}

struct factor{
    int x,cnt;
}fac[10];

int main(){
    int x,num=0;
    scanf("%d",&x);
    if(x==1){
        printf("1=1");
    }
    else{
        printf("%d=",x);
        int sqr=(int)sqrt(1.0*x);
        for(int i=0;i<pNum && Prime[i]<sqr;i++){
            if(x % Prime[i]==0){
                fac[num].x=Prime[i];
                fac[num].cnt=0;
                while(x % Prime[i]==0){
                    fac[num].cnt++;
                    x /=Prime[i];
                }
                num++;
            }
            //num++;    //放在这儿有问题吗
            if(x==1) break;
        }
        if(x!=1){
            fac[num++].x=x;
            fac[num++].cnt=1;
        }
        for(int i=0;i<num;i++){
            if(i>0){
                printf("*");
            }
            printf("%d",fac[i].x);
            if(fac[i].cnt>1){
                printf("%d^",fac[i].cnt);
            }
        }
    return 0;
}