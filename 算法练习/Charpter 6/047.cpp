#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc,char* argv[]){
    int a[3]={1,1,1};
    fill(a,a+3,233);
    for(int i=0;i<3;i++){
        printf("%d",a[i]);
    }
    return 0;
}