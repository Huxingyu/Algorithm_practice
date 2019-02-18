#include <stdio.h>
#include <algorithm>

using namespace std;

struct one{
    int x,y;
}hu[10];

bool cmp(one a,one b){
    if(a.x!=b.x) {
        return a.x>b.x;
    }
    else{
        return a.y<b.y;
    }
}

int main(){
    hu[0].x=1;
    hu[0].y=2;
    hu[1].x=3;
    hu[1].y=4;
    hu[2].x=1;
    hu[2].y=8;
    sort(hu,hu+3,cmp);
    for(int i=0;i<3;i++){
        printf("%d %d\n",hu[i].x,hu[i].y);
    }
}