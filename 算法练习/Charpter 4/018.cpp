#include <stdio.h>
#include <algorithm>

using namespace std;

int binarysearch(int num[],int left,int right,int x){
  while(left<=right){
    int mid=(left+right)/2;
    if(x=num[mid]){    //mid->num[mid]
      return mid; //x->mid,this very interesting
    }
    else if(x>num[mid]){
      left=mid+1;
    }
    else{
      right=mid-1;
    }
  }
  return -1;
}
int cmp(int x,int y){
  return x<y;
}
int main(){
  const int n=5;
  int x,num[n];
  scanf("%d",&x);
  for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
  }
  sort(num,num+n,cmp);
  int y=binarysearch(num,0,n-1,x);
  printf("%d",y);
  return 0;
}
//结合起来有些问题
