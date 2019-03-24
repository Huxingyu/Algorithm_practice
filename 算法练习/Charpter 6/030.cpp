#include <stdio.h>
#include <map>

using namespace std;

int main(){
    map<char,int> mp;
    mp['a']=10;
    mp['c']=20;
    mp['b']=30;
    map<char,int>::iterator it=mp.find('a');    //注意函数应该是()而不是[]
    mp.erase(it);
    for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++){
        printf("%c %d\n",it->first,it->second);
    }
    return 0;
}