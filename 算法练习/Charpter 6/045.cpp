#include <stdio.h>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc,char* argv[]){
    int a[10]={1,2,3,4,5};
    string b= "huxingyu";
    reverse(a,a+5);
    reverse(b.begin(),b.begin()+8);
    for(int i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    for(int j=0;j<8;j++){
        printf("%c ",b[j]);
    }
    return 0;
}