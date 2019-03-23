#include <stdio.h>
#include <map>

using namespace std;

int main(){
    map<char,int> mp;
    mp['b']=10;
    mp['a']=20;
    mp['c']=50;
    for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
        printf("%c %d\n",it->first,it->second);
    }
    return 0;
}