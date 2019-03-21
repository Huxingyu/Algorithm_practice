//对022.cpp的改进

#include <stdio.h>

typedef long long ll;

ll num[100][100]={0};

ll cal(ll n,ll m){
    if(m==0||n==m){
        return 1;
    }
    if(num[n][m]!=0){
        return num[n][m];
    }
    else{
        return num[n][m]=cal(n-1,m)+cal(n-1,m-1);
    }
}

int main(){
    //...
}