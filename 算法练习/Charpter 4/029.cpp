#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand((unsigned)time(NULL));
    for(int i=0;i<10;i++){
        printf("%d",rand()%11+0);
    }
    return 0;
}