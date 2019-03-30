#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc,char* argv[]){
    int x[10]={1,1,1,1,2,3,4,5};
    printf("%d",(lower_bound(x,x+8,3))-x);
    return 0;
}