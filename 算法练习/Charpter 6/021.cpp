//string常用函数

#include <stdio.h>
#include <string>

using namespace std;

int main(){
    string str1="abc",str2="def";
    str1 +=str2;    //like python
    for(int i=0;i<str1.length()||i<str1.size();i++){   //name.length()->name.size()
        printf("%c",str1);
    }
    if(str1<str2){
        printf("WTF");
    }
    return 0;
}