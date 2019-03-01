#include <stdio.h>

int low_bound(int num[],int left,int right,int x){
  while(left<right){  //don't need (left<=right)
    int mid=(left+right)/2;
    if(x<=num[mid]){
      right=mid;
    }
    else{
      left=mid+1;
    }
  }
  return right;//if x don't exist,just return the potision where it should be.
}

int main(){
}
