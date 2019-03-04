//递推

#include <stdio.h>
#include <string.h>

const int max=100010;
const int mod=1000000007;   //MOD起什么作用

char str[max];
int leftnumP[max]={0};
int main(){
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        if(i>0){
            leftnumP[i]=leftnumP[i-1];
        }
        if(str[i]=='P'){
            leftnumP[i]++;
        }
    }
    int ans=0,rightnumT=0;
    for(int i=max-1;i>=0;i--){
        if(str[i]=='T'){
            rightnumT++;
        }
        else if(str[i]=='A'){
            ans=(ans+leftnumP[i]*rightnumT);
        }
    }
    printf("%d",ans);
    return 0;
}