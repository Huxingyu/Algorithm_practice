#include <stdio.h>

const int max=100;

bool hash[max]={false};

int main(){
    int n,m,x;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        hash[x]={true};
    }
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        if(hash[x]={true}){ //hash[x]=={TRUE}
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}