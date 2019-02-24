#include <stdio.h>

int f(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return f(x-1)*x;
    }
    
}

int main(){
    int x;
    scanf("%d",&x);
    int answer=f(x);
    printf("%d",answer);
    return 0;
}