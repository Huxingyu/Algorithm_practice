#include <stdio.h>

int main(){
    char str[30];
    while (gets(str)!=NULL){
        puts(str);
    }
    return 0;
}

// int main(){
//     char str[10];
//     while(scanf("%s",str)!= EOF){
//         printf("%s",str);
//     }
//     return 0;
// }