#include <iostream>
#include <queue>
#include <string>
#include <stdio.h>

using namespace std;

struct fuirt{
    string name;
    int price;
}f1,f2,f3;

struct cmp{
    bool operator()(fuirt f1,fuirt f2){
        return f1.price>f2.price;
    }
};

int main(){
    priority_queue<fuirt,vector<fuirt>,cmp> q; //定义优先级
    f1.name = "hu";
    f1.price = 2;
    f2.name = "xing";
    f2.price = 4;
    f3.name = "yu";
    f3.price = 2;
    q.push(f1);
    q.push(f2);
    q.push(f3);
    cout<<q.top().name<<" "<<q.top().price;
    return 0;   
}