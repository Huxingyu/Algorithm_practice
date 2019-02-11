#include <stdio.h>

int swap(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
    printf("a1=%d,b1=%d\n",*p,*q);
    return 0;
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a2=%d,b2=%d",a,b);
    return 0;
}
// int swap(int* p,int* q){
//     int* temp;
//     temp=p;
//     p=q;
//     q=temp;
//     printf("a1=%d,b1=%d\n",*p,*q);
//     return 0;
// }
//------------------------------------
// int swap(int a,int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("a1=%d,b1=%d\n",a,b);
//     return 0;
// }
