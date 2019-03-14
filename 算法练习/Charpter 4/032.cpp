// random select algorithm
//随机选择算法
//选择出第K大的数字，如果排序取值时间复杂度是O(nlogn)，随机选择算法为O(n)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randpartiton(int num[],int left,int right){ //随机位置部分排序
    int p=(round(1.0*rand()/RAND_MAX*(right-left)+left)); //随机数
    swap(num[p],num[left]);
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

int randselect(int num[],int left,int right,int k){
    if(left==right){
      return num[left];
    }
    int p=randpartiton(num,left,right);
    int x=p-left+1; //第(p-left+1)大的数字
    if(x==k){
      return num[x];
    }
    if(x>k){
      randselect(num,left,p-1,k);
    }
    if(x<k){
      randselect(num,p,right,k-x); //注意不是(k-p)
    }
}

int int main(int argc, char const *argv[]) {
  int n,left,right,k,num[];
  scanf("%d%d%d%d",&n,&left,&right,&k);
  for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
  }
  randselect(num,left,right,k);
  return 0;
}
