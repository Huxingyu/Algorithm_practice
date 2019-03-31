//queue
#include <stdio.h>
#include <queue>

int front,rear,q[];

void clear(){
    front=rear=-1;
}

int size(){
    return rear-front;
}

bool empty(){
    if(front=rear=-1){
        return true;
    }
    else{
        return false;
    }
}

void push(int x){
    q[++rear]=x;
}

void pop(){
    front++;
}

int get_front(){
    return q[front+1];
} 

int get_rear(){
    return q[rear];
}
int main(){
    std::queue<int> q;
    while(!q.empty()){
        q.pop();
    }
}