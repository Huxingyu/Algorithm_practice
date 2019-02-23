#include <stdio.h>

const int max=10;

int HashNumber[]={0};
char HashStr[max][3],temp[10];

int HashFuction(char _HashStr[],int n){
    int x=0;
    for(int i=0;i<n;i++){
        x=x*26+(_HashStr[i]-'A');
    }
    return x;
}

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",HashStr[i]);
        int x=HashFuction(HashStr[i],3);    //notice
        HashNumber[x]++;
    }
    for(int i=0;i<m;i++){
        scanf("%s",temp);
        int y=HashFuction(temp,3);
        printf("%d\n",HashNumber[y]);
    }
    return 0;
}

//hash