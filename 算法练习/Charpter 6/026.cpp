//string->replace()
//str.replace(pos,len,str2)
//str.replace(it1,it2,str2)

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "huxingyu",str2 = "ooo";
    cout<<str.replace(0,3,str2);
    return 0;
}