//find(),erase(),

#include <stdio.h>
#include <map>

using namespace std;

int main(){
    map<char,int> mp;
    mp['a']=20;
    mp['b']=30;
    mp['c']=10;
    map<char,int>::iterator it=mp.find('b');
    printf("%c %d\n",it->first,it->second);
    return 0;
}