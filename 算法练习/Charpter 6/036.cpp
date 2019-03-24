//基本数据类型的优先级设置

#include <stdio.h>
#include <queue>

using namespace std;

int main(){
    priority_queue< int,vector<int>,greater<int> > q;
    q.push(1);
    q.push(2);
    q.push(3);
    printf("%d",q.top());
    return 0;
}