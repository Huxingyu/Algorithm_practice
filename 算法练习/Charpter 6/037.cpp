//结构体的优先级设置

#include <iostream>
#include <string>
#include <queue>

using namespace std;

struct fuirt{
    string name;
    int price;
    friend bool operator < (fuirt f1,fuirt f2){
        return f1.price>f2.price;
    }
}f1,f2,f3;

int main(){
    priority_queue<fuirt> q;
    f1.name = "wo";
    f1.price = 10;
    f2.name = "shi";
    f2.price = 30;
    f3.name = "huxingyu";
    f3.price = 100;
    q.push(f1);
    q.push(f2);
    q.push(f3);
    cout<<q.top().name<<" "<<q.top().price<<endl;
    return 0;
}

// 对比
// #include <stdio.h>
// #include <algorithm>

// using namespace std;

// bool cmp(int a,int b){
//     return a>b;
// }

// int main(){
//     int a[10]={1,3,2,4};
//     sort(a,a+4,cmp);
//     for(int i=0;i<4;i++){
//         printf("%d ",a[i]);
//     }
// }
