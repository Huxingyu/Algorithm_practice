//函数递归
#include <stdio.h>

int f(int n){
    if(n<=1) return 1;
    else return f(n-1)*n;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}

// int f(int n){
//     int i=1,sum=1;
//     while(i<=n){
//         sum = sum * i;
//         i++;
//     }
//     return sum;
// }