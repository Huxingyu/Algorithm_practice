#include <stdio.h>

int fab(int n){
    if(n==0||n==1){ //递归边界
        return 1;
    }
    else{
        return fab(n-1)+fab(n-2);   //递归式
    }
}

int main(){
    int x;
    scanf("%d",&x);
    int anwser=fab(x);
    printf("%d",anwser);
    return 0;
}