//string->erase
#include <iostream>
//#include <stdio.h>
#include <string>

using namespace std;

// int main(){
//     string str="aaaaa";
//     str.erase(str.begin(),str.end()-2);  //迭代器
//     cout<<str<<endl;
//     return 0;
// }

int main(){
    string str="aaaaaaaaa";
    str.erase(0,5);         //数组位置
    cout<<str<<endl;
    return 0;
}