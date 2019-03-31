//stack
#include <stack>

int TOP;
int st[];

void clear(){
    TOP=-1;           
}

int size(){
    return TOP+1;   
}

bool empty(){
    if(TOP==-1){
        return true;
    }
    else{
        return false;
    }
}

void push(int x){
    st[++TOP]=x;
}

void pop(){
    TOP--;
}

int top(){
    return st[TOP];
}
// int main(){
//     std::stack<int> st;
// }