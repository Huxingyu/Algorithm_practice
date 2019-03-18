//筛法，求解素数表
//时间复杂度O(nlognlogn)
//Eratosthenes筛法

#include <stdio.h>

const int max =101;
int prime[max],pNum=0;
bool p[max]={0};

void Find_Prime(){
    for(int i=2;i<max;i++){
        if(p[i]==false){
            prime[pNum++]=i;
            for(int j=i+i;j<max;j+=i){
                p[j]=true;
            }
        }
    }
}

int main(){
    Find_Prime();
    for(int i=0;i<pNum;i++){
        printf("%d ",prime[i]);
    }
    return 0;
}