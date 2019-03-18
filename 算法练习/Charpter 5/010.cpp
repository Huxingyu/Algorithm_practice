//筛法输出第N-M个素数

#include <stdio.h>

const int max =1000001;
int prime[max],pNum=0;
bool p[max]={0};

void Find_Prime(int n){
    for(int i=2;i<max;i++){ //记得这儿是2而不是0
        if(p[i]==false){
            prime[pNum++]=i;
            if(pNum>=n){
                break;
            }
            for(int j=i+i;j<max;j+=i){
                p[j]=true;
            }
        }
    }
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    Find_Prime(m);
    for(int i=n-1;i<m;i++){
        printf("%d ",prime[i]);
    }
    return 0;
}