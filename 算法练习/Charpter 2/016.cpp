#include <stdio.h>

int main(){
    int a[10]={};
    scanf("%d",&a[0]);  //这里的a[0]属于已经被定义了
    for(int i=0;i<10;i++){
        a[i+1]=a[i]*2;
    }
    for(int i=0;i<10;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}


/*int main(){
    int a[10]={0,1,2,3,4,5,6};
    for(int i=0;i<10;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}*/

//一维数组