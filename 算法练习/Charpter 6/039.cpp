#include <stdio.h>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    for(int i=0;i<5;i++){
        st.push(i);         //0,1,2,3,4
    }
    for(int i=0;i<3;i++){
        st.pop();           //4,3,2
    }
    printf("%d",st.top());  //1
    return 0;
}