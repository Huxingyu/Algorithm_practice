//memset(name,vaule,numbers of_)

#include <stdio.h>
#include <string.h>

int main(){
    int a[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        printf("a[%d]=%d ",i,a[i]);
    }
    memset(a,0,sizeof(a));
    for(int i=0;i<5;i++){
        printf("a[%d]=%d ",i,a[i]);
    }
    memset(a,-1,sizeof(a));
    for(int i=0;i<5;i++){
        printf("a[%d]=%d ",i,a[i]);
    }
    memset(a,1,sizeof(a));
    for(int i=0;i<5;i++){
        printf("a[%d]=%d ",i,a[i]);
    }
    return 0;
}