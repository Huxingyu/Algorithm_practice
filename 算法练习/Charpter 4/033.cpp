//绝对值最小算法

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

using namesapce std;

const int max = 10000;

int left,right,n,k,num[max];

int randpartiton(int num[],int left,int right){
    int p=(round(1.0*rand()/RAND_MAX*(right-left)+left));//生成[left,right]随机数
    swap(num[p],num[left]);
    temp=num[left];
    while(left<right){
      while (left<right && num[right]>temp) {
        right--;
      }
      num[left]=num[right];
      while (left<right && num[left]<temp){
        left++;
      }
      num[right]=num[left];
    }
    num[left]=temp;
    return left;
}

int randselect(int num[],int left,int right,int k){
    if(left==right){
      return; //直接退出即可，我们要的是排序
    }
    int p=randpartiton(num,left,right);
    int x=p-left+1;
    if(x=k){
      return;
    }
    if(x>k){
      randselect(num,left,p-1,k);
    }
    else{
      randselect(num,p+1,right,k-x);
    }
}

int main(){
  srand((unsigned)time(NULL));  //初始化随机种子
  int sum=0,sum1=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
    sum+=num[i];
  }
  randselect(num,0,n-1,n/2);
  for(int i=0;i<n/2;i++){
    sum1+=num[i];
  }
  printf("%d",(sum-sum1)-sum1);
  return 0;
}
