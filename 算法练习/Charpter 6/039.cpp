#include <stdio.h>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    for(int i=0;i<5;i++){
        st.push(i);
    }
    for(int i=0;i<3;i++){
        st.pop();
    }
    printf("%d",st.top());
    return 0;
}