//size()
//clear()

#include <stdio.h>
#include <vector>

int main(){
    std::vector<int> vi;
    for(int i=0;i<5;i++){
        vi.push_back(i);
    }
    vi.clear();
    printf("%d",vi.size());
    return 0;
}