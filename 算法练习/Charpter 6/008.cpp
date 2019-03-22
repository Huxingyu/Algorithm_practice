//pop_back()
//O(1)

#include <stdio.h>
#include <vector>

//using namespace std;

int main(){
    std::vector<int> vi;
    for(int i=0;i<5;i++){
        vi.push_back(i);
    }
    vi.pop_back();
    for(int i=0;i<vi.size();i++){
        printf("%d",vi[i]);
    }
    return 0;
}