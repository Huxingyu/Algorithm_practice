#include <stdio.h>

const double eps=1e-5;
int left=1,right=2;

double f(double x){
  return x*x;
}

double sqrt(){
  double mid=(left+right)/2;
  while(right-left>eps){
    if(f(mid)>2){
      right=mid;
    }
    else{
      left=mid;
    }
  }
  return mid;
}

int main(){
  double y=sqrt();
  printf("%lf",y);
  return 0;
}
