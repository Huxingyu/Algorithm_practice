//string->find(),nops

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1="hello world";
    string temp="world";
    if(str1.find(temp)!=str1.npos){
        cout<<str1.find(temp)<<endl;
    }
    else{
        cout<<"fuck no"<<endl;
    }
    return 0;
}