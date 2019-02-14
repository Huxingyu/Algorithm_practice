#include <stdio.h>

int x,n,number[200];

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d ",&number[i]);
    }
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(x==number[i]){
            printf("%d",i);
            break;
        }
    }
    return 0;
}

//穷举算法