#include <stdio.h>

int main(){
    int n,school[100000]={0};
    int j,sorce;
    int max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&j,&sorce);
        school[j] = school[j] + sorce;
        if(school[j]>max){
            max = school[j];
        }
    }
    printf("%d %d",j,max);
    return 0;
}

//简单模拟