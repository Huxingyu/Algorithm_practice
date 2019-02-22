#include <stdio.h>

const int max=100;

int hash[max]={0};

int main(){
    int n,m,x,y;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        hash[x]=hash[x]+1;
    }
    for(int i=0;i<m;i++){
        scanf("%d",&y);
        printf("%d ",hash[y]);
    }
    return 0;
}