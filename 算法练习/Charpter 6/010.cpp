//insert(_,_)

#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    vector<int> vi;
    for(int i=0;i<5;i++){
        vi.push_back(i);
    }
    vi.insert(vi.begin(),666);
    vector<int>::iterator it=vi.begin();
    for(int i=0;i<vi.size();i++){
        printf("%d",*(it+i));
    }
    return 0;
}