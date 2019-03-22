#include <stdio.h>
#include <set>

int main(){
    std::set<int> st;
    for(int i=0;i<5;i++){
        st.insert(i);
    }
    std::set<int>::iterator it=st.find(3);
    st.erase(it,st.end());     //
    for(it=st.begin();it!=st.end();it++){
        printf("%d",*it);
    }
    return 0;
}