#include <stdio.h>
#include <stack>

using namespace std;

int main(int argc,char* argv[]){
    stack<int> st;
    if(st.empty()==true){
        printf("ok\n");
    }
    else{
        printf("no\n");
    }
    for(int i=0;i<5;i++){
        st.push(i);
    }
    if(st.empty()==false){
        printf("%d",st.size());
    }
    else{
        printf("no");
    }
    return 0;
}