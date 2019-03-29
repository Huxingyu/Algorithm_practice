#include <iostream>
#include <utility>
#include <string.h>

using namespace std;

int main(int argc,char* argv[]){
    pair<string,int> p; //两个元素，不多不少
    p.first = "hu";
    p.second = 1;
    cout<<p.first<<" "<<p.second<<endl;
    p=make_pair("xing",2);
    cout<<p.first<<" "<<p.second<<endl;
    p=pair<string,int>("yu",3);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}