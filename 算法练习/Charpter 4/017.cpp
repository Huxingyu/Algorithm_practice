#include <stdio.h>
#include <algorithm>

using namespace std;

int n,count=0;
struct xy{
  int x;
  int y;
}stu[100];

bool cmp(xy a,xy b){ //int->bool
  if(a.x!=b.x){
    return a.x>b.x;
  }
  else{
    return a.y<b.y;
  }
}

int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){
      scanf("%d %d",&stu[i].x,&stu[i].y);
  }
  sort(stu,stu+n,cmp);
  // for(int i=0;i<n;i++){
  //   if(stu[i].y>stu[i+1].x){
  //     count++;
  //   }
  // }
  int x=1,temp=stu[0].x;
  for(int i=1;i<n;i++){
    if(stu[i].y<=temp){
      temp=stu[i].x;
      count++;
    }
  }
  printf("%d",count);
  return 0;
}
