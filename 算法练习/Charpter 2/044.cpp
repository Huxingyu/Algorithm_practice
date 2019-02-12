#include <stdio.h>

void change(int a[],int n){
    for(int i=0;i<n;i++){
        if(a[i]<=0){
            a[i]=0;
        }
    }
}

int main(){
    int a[10];
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    change(a,10);
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}