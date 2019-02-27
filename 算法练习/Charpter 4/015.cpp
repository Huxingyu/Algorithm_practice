#include <stdio.h>
#include <algorithm>

using namespace std;

int n,req,stun,sell;
double ans=0;
struct mooncake{
    double store;
    double sell;
    double price; 
}cake[10];

bool cmp(mooncake x,mooncake y){
    return x.price>y.price;
}

int main(){
    scanf("%d %d",&n,&req);
    for(int i=0;i<n;i++){
        scanf("%lf",&cake[i].store);   //forget "&"
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&cake[i].sell);
        cake[i].price=cake[i].sell/cake[i].store;
    }
    sort(cake,cake+n,cmp);
    for(int i=0;i<n;i++){
        if(cake[i].store<req){
            req-=cake[i].store;
            ans+=cake[i].sell;
        }
        else{
            ans+=cake[i].price*req;
            break;  //if this programm be load once,break.
        }
    }
    printf("%d",ans);
    return 0;
}