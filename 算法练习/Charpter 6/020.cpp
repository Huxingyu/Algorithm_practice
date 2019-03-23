#include <stdio.h>
#include <string>

using namespace std;

int main(){
    string str="abcd";
    for(string::iterator it=str.begin();it!=str.end();it++){
        printf("%c",*it);
    }
    return 0;
}

//string支持迭代器直接相加减数字