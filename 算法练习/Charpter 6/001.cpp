#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    int number[5]={0,-1,2,-3,4};
    sort(number,number+5);
    for(int i=0;i<5;i++){
        printf("%d ",number[i]);
    }
    return 0;
}