#include <stdio.h>
#include <math.h>
const int max=10;

int n,p[max],hashtable[max]={false};
int count=0;

//void function(int x);

void function(int x){
    if(x==n+1){
        count++;
        return;     //这儿在这儿具体是什么意思
    }
    for(int i=1;i<=n;i++){
        if(hashtable[i]==false){
            bool temp=true;
            for(int j=1;j<=n;j++){    //这儿为什么没用j=i+1
                if(abs(i-j)==abs(p[i]-p[j])){   //这个计算式不对
                    temp=false;
                    break;
                }
            }
            if(temp){
                p[x]=i;
                hashtable[i]=true;
                function(x+1);
                hashtable[i]=false;
            }
        }
    }    
}
int main(){
    scanf("%d",&n);
    function(1);
    printf("%d",count);
    return 0;
}

//n皇后回溯