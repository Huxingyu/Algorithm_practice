#include <stdio.h>


int upper_bound(int num[],int left,int right,int x){
  while (left<right) {
    int mid=(left+right)/2;
    if(x<num[mid]){
      right=mid;
    }
    else{
      left=mid+1;
    }
  }
  return left;
}
int main(){
  const int max=10;
  int num[max]={0,1,2,3,4,5,6,7,8,9};
  int y=upper_bound(num,0,max,3);//not max-1
  printf("%d",y);
  return 0;
}
