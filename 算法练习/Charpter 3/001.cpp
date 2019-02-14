#include <stdio.h>

int main(){
    int n,i=0;
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
            i++;
        }
        else{
            n=(3*n+1)/2;
            i++;
        }
    }
    printf("%d",i);
    return 0;
}

//pat b1001;
//优化，可以用一个while(){n++}代替两个小的n++;
//简单模拟