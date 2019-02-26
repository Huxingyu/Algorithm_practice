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
    for(int i=1;i<=n;i++){  //行
        if(hashtable[i]==false){    //i行无皇后
            bool temp=true;         
            for(int j=1;j<x;j++){    //遍历之前的皇后
                if(abs(x-j)==abs(i-p[j])){   //（列相减）=（行相减）
                    temp=false;
                    break;
                }
            }
            if(temp){
                p[x]=i;//x列皇后的行号i
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