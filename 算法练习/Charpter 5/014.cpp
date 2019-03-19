#include <stdio.h>
#include <string.h>

struct num{
    int d[1000];
    int len;
    num(){
        memset(d,0,sizeof(d));
        len=0;
    }
};  //这个不要忘了

int compare(num x,num y){
    if(x.len>y.len){
        return 1;
    }
    else if(x.len<y.len){
        return -1;
    }
    else{
        for(int i=x.len-1;i>=0;i--){
            if(x.d[i]>y.d[i]){
                return 1;
            }
            else if(x.d[i]<y.d[i]){
                return -1;
            }
        }
        return 0;
    }
}

int main(){
    //...;
}