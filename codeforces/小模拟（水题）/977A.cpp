#include <stdio.h>

int main(){
    int n,i;
    scanf("%d %d",&n,&i);
    while(i>0){
        if(n%10==0){
            n=n/10;
        }
        else{
            n=n-1;
        }
        i--;
    }
    printf("%d",n);
    return 0;
}
