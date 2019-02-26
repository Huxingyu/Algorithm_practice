#include <stdio.h>
#include <math.h>
const int max=11;

int z,x,p[max],hashtable[max]={false};
int count=0;

void f(int n){
    if(n==x+1){
        bool temp=true;
        for(int i=1;i<=x;i++){
            for(int j=i+1;j<=x;j++){ //already think about i=1
                if(abs(i-j)==abs(p[i]-p[j])){
                    temp=false;
                }
            }
        }
        if(temp){
            count++;
        }
        return;
    }
    for(int d=1;d<=x;d++){
        if(hashtable[d]==false){
            p[n]=d;//这儿出错了，参考的015.cpp,错写为p[x]=d,n=8时错为5040.
            hashtable[d]=true;
            f(n+1);
            hashtable[d]=false;
        }
    }
}

int main(){
    scanf("%d",&z);
    f(z);
    printf("%d",count);
    return 0;
}

//n皇后