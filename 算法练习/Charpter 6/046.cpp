#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    int a[3]={1,2,3};
    do{
        printf("%d %d %d\n",a[0],a[1],a[2]);
    }while(next_permutation(a,a+3));    //1,2,3也需要输出
    return 0;
}