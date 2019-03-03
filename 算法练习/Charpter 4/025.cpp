#include <stdio.h>

const int max=10;

int merge(int n,int m,int num1[],int num2[]){
    int i=0,j=0,x=0,num3[2*max];
    while(i<n && j<m){
        if(num1[i]<=num2[j]){   //小于等于可以一起考虑
            num3[x++]=num1[i++];
        }
        else{
            num3[x++]=num2[j++];
        }
    }
    while(i<n){
        num3[x++]=num1[i++];
    }
    while(j<m){
        num3[x++]=num2[j++];
    }
    // for(int i=0;i<x;i++){
    //     printf("%d ",num3[i]);
    // }
    return x;
}

int main(){
    int n,m,num1[max],num2[max];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&num1[i]);
    }
    for(int j=0;j<n;j++){
        scanf("%d",&num2[j]);
    }
    int y=merge(n,m,num1,num2);
    printf("%d",y);
    return 0;
}
