#include <stdio.h>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    for(int i=0;i<3;i++){
        q.pop();    //pop没有参数
    }
    printf("%d",q.front());
    return 0;
}