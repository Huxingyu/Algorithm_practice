#include <stdio.h>

const int max=5;

int partition(int num[],int left,int right){
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

int main(){
    int num[max],left=0,right=4;
    int y=partition(num,left,right);
    printf("%d",y);
    return 0; 
}