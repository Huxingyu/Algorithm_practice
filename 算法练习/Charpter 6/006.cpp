#include <stdio.h>
#include <vector>

using namespace std;

int main(){
    vector<int> vi;
    for(int i=0;i<10;i++){
        vi.push_back(i);
    }
    for(vector<int>::iterator it=vi.begin();it!=vi.end();it++){
        printf("%d",*it);
    }
    return 0;
}