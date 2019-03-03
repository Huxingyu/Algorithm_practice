//实现快速排序
//O(nlongn)
#include <stdio.h>

const int max=10;

int partiton(int num[],int left,int right){
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
        int mid=partiton(num,left,right);
        quicksort(num,left,mid-1);  //mid -> mid-1
        quicksort(num,mid+1,right);
    }
}

int main(){
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