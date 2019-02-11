#include <stdio.h>

void swap(int* &p,int* &q){
    int* temp = p;
    p = q;
    q = temp;
    printf("a1=%d,b1=%d\n",*p,*q);
}

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int*p=&a,*q=&b;
    swap(p,q);
    printf("a2=%d,b2=%d",*p,*q);
    return 0;
}
//引用





// int change(int&a){
//     a=1;
//     return 0;
// }

// int main(){
//     int x=10;
//     change(x);
//     printf("%d",x);
//     return 0;
// }