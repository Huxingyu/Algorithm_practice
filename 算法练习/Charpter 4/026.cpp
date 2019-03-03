//归并排序

#include <stdio.h>

const int max=100;

void merge(int num[],int l1,int r1,int l2,int r2){
    int i=l1,j=l2,x=0,temp[max];
    if(i<r1 && j<r2){   //使用这个算法必须保证两个分组是递增有序的
        if(num[i]<=num[j]){
            temp[x++]=num[i++];
        }
        else{
            temp[x++]=num[j++];
        }
    }
    while(i<r1)
        temp[x++]=num[i++];
    while(j<r2)
        temp[x++]=num[j++];
    for(int i=0;i<x;i++){
        num[l1+i]=temp[i];
    }
}

void mergesort(int num[],int left,int right){
    if(left<right){
        int mid=(left+right)/2;
        mergesort(num,left,mid);//左区间
        mergesort(num,mid+1,right);//右区间
        merge(num,left,mid,mid+1,right);//两区间合并
    }
}

int main(){
    //...
}