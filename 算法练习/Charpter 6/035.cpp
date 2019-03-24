#include <stdio.h>
#include <queue>

using namespace std;

int main(){
    priority_queue<int> q;
    q.push(1);
    q.push(3);
    q.push(2);
    printf("%d",q.top());
    q.pop();
    printf("%d",q.top());
    return 0;
}