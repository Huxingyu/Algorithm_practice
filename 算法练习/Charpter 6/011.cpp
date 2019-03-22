#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    vector<int> vi;
    for(int i=0;i<10;i++){
        vi.push_back(i);
    }
    vi.erase(vi.begin());
    for(int i=0;i<vi.size();i++){
        printf("%d",vi[i]);
    }
    vi.erase(vi.begin(),vi.begin()+3);
    for(int i=0;i<vi.size();i++){
        printf("%d",vi[i]);
    }
    return 0;
}