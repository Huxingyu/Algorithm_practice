#include <stdio.h>

int continue_t(int n){
    int i,sum=0;
    for(i=1;i<=n;i++){
        //sum = sum+i;
        if(i%2==1) continue;
        sum = sum+i;
    }
    //printf("%d",sum);
    return sum;
}

int break_t(int n){
    int i=1,sum=0;
    for(;i<=n;i++){
        sum = sum+i;
        if(sum>2000) break;
    }
    return sum;
}

int main(){
    printf("%d\n",continue_t(5));
    printf("%d\n",break_t(100));
    return 0;
}