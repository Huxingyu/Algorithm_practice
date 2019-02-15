#include <stdio.h>
#include <string.h>

char str[256];

int bit(char _str[]){
    int x;
    int n=strlen( _str);
    if(n%2==0){
        x=n/2;
    }
    else{
        x=(n-1)/2;
    }
    return x;
}
int answer=0;

int compare(char _str[]){
    int l=strlen( _str);
    int n=bit( _str);
    for(int i=0;i<n;i++){
        if(str[i]==str[l-1-i]){
            answer++;
        }
    }
    return 0;
}

int main(){
    gets(str);
    int m=bit(str);
    compare(str);
    if(answer==m){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}

//回文字符串判断
//可以更加优化