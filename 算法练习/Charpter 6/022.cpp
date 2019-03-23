//string->insert
//两种用法

#include <stdio.h>
#include <string>

using namespace std;

int main(){
    string str="aaa",temp="go";
    str.insert(0,temp);
    str.insert(str.begin(),temp.begin(),temp.end());
    return 0;
}