#include <stdio.h>

int main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int* p=a;
    int* q=&a[5];
    printf("&a[0]=%d\n&a[5]%d\n&a[5]-&a[0]%d",p,q,p-q);
    return 0;//地址距离以int为单位，而1 int=4 byte
}

/*int main(){
    int a[10]={0,1,2,3,4,5};
    for(int* p=a;p<a+10;p++){
        printf("%d ",*p);
    }
    return 0;
}*/