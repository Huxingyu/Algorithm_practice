#include <stdio.h>
#include <algorithm>

struct node{
    int a,b;
}temp[3];

bool cmp(node x,node y){
    if(x.a!=y.a){
        return x.a>y.a;
    }
    else{
        return x.b<y.b;
    }
}

int main(int argc,char* argv[]){
    temp[0].a=0;
    temp[0].b=0;
    temp[1].a=1;
    temp[1].b=2;
    temp[2].a=1;
    temp[2].b=3;
    std::sort(temp,temp+3,cmp);
    for(int i=0;i<3;i++){
        printf("%d %d",temp[i].a,temp[i].b);
    }
    return 0;
}