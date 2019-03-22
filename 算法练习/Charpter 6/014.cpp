#include <stdio.h>
#include <set>

using namespace std;

int main(){
    set<int> st;
    for(int i=0;i<5;i++){
        st.insert(i);
    }
    for(int i=2;i<4;i++){
        //st.erase(st.find(i)); //删除迭代器
        st.erase(i);    //删除元素
    }
    for(set<int>::iterator it=st.begin();it!=st.end();it++){
        printf("%d",*it);
    }
    return 0;
}