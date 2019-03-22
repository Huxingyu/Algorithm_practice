#include <stdio.h>
#include <set>

using namespace std;

int main(){
    set<int> st;
    for(int i=0;i<5;i++){
        st.insert(i);
    }
    printf("%d",st.size());
    return 0;
}