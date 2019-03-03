//随机主元快速排序

//实现快速排序
//O(nlongn)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int max=10;

int randpartiton(int num[],int left,int right){
    int p=(round(1.0*rand()/RAND_MAX*(right-left)+left)); //随机数
    int temp=num[left];
    while(left<right){
        while(left<right && num[right]>temp){
            right--;
        }
        num[left]=num[right];
        while(left<right && num[left]<temp){
            left++;
        }
        num[right]=num[left];
    }
    num[left]=temp;
    return left;
}

void quicksort(int num[],int left,int right){
    while(left<right){
        int mid=randpartiton(num,left,right);
        quicksort(num,left,mid-1);  //mid -> mid-1
        quicksort(num,mid+1,right);
    }
}

int main(){
    srand((unsigned)time(NULL));
    int left=0,right=max-1,num[max];
    for(int i=0;i<max;i++){
        scanf("%d",&num[i]);
    }
    quicksort(num,left,right);
    for(int j=0;j<max;j++){
        printf("%d",num[j]);
    }
    return 0;
}