#include <stdio.h>
#include <queue>

int main(){
    std::queue<int> q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    printf("%d",q.size());
    return 0;
}