#include <stdio.h>
#include <algorithm>

using namespace std;

bool cmp(int a,int b){
    return a>b;
}

int main(){
    int a[10]={1,3,2,4};
    sort(a,a+4,cmp);
    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
    }
}