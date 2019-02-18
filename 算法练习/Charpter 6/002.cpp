#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    char str[10]={'a','d','b','z','g','j'};
    sort(str,str+6);
    for(int i=0;i<6;i++){
        printf("%c ",str[i]);
    }
    return 0;
}