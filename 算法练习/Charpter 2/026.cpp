#include <stdio.h>

int max(int a,int b,int c){
    int max;
    if(a>=b && a>=c){
        max = a;
    }
    else if(b>=a && b>=c){
        max = b;
    }
    else{
        max = c;
    }
    return max;
}

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max(a,b,c));
    return 0;
}
// int max(int a,int b,int c){
//     if(a>b){
//         if(a>c){
//             return a;
//         }
//         else{
//             return c;
//         }
//     }
//     else{
//         if(b>c){
//             return b;
//         }
//         else{
//             return c;
//         }
//     }
// }
