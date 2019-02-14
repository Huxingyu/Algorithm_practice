#include <stdio.h>

int main(){
    int n,num[100]={0};
    int x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        if(num[i]==0){
            x = x + 1;
        }
    }
    if(x==n){
        printf("EASY");
    }
    else{
        printf("HARD");
    }
    return 0;
}


// int main(){
//     int n,num[100]={0};
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&num[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(num[i]==1){
//             printf("HARD");
//             break;
//         }
//     }
//     return 0;
// }