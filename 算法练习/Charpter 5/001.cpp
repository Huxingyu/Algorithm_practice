//自己写的相差最大值程序

#include <stdio.h>

const int max=4;

int num[max];

int select_sort_reduce(int num[],int n){
    for(int i=0;i<n;i++){
        int k=i;
        for(int j=i;j<n;j++){
            if(num[j]<num[k]){
                k=j;
            }
        }
        int temp=num[k];
        num[k]=num[i];
        num[i]=temp;
    }
    int x=num[0]+num[1]*10+num[2]*100+num[3]*1000;
    return x;
}

int select_sort_plus(int num[],int n){
    for(int i=0;i<n;i++){
        int k=i;
        for(int j=i;j<n;j++){
            if(num[j]>num[k]){
                k=j;
            }
        }
        int temp=num[k];
        num[k]=num[i];
        num[i]=temp;
    }
    int y=num[0]+num[1]*10+num[2]*100+num[3]*1000;
    return y;
}

int main(){
    int x;
    scanf("%d",&x);
    int num[0]=x/1000;
    int num[1]=(x/100)%10;
    int num[2]=(x/10)%10;
    int num[3]=x%10;
    if(num[0]==num[1]==num[2]==num[3]){
        print("0000");
        }
    else{ 
        x=select_sort_reduce(num,max);
        y=select_sort_plus(num,max);
        print("%d",y-x);
    }
    return 0;
}