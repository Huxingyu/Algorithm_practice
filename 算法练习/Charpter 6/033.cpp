#include <stdio.h>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    if(q.empty()==true){
        printf("no");
    }
    else{
        printf("yes");
    }
    return 0;
}