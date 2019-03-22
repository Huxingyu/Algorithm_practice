//set_find{}
//find{}返回迭代器，什么意思呢？
#include <stdio.h>
#include <set>

using namespace std;

int main(){
    set<int> st;
    for(int i=5;i<10;i++){
        st.insert(i);
    }
    set<int>::iterator it=st.find(9);
    printf("%d",*it);
    return 0;
}