#include <stdio.h>
#include <map>

using namespace std;

int main(){
    map<char,int> mp;
    mp['a']=20;
    printf("%d",mp['a']);
    return 0;
}