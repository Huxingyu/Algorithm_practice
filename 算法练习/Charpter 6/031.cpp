#include <stdio.h>
#include <queue>

using namespace std;

int main(){
    queue<int>  q;
    for(int i=0;i<5;i++){
        q.push(i);
    }
    printf("%d %d",q.front(),q.back());
    return 0;
}