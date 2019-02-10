#include <stdio.h>

int main(){
    int i=1,sum=0;
    for(;i<=100;i++){
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}

/*int main(){
    int n=1,sum=0;
    do{
        sum = sum+n;
        n++;
    }while(n<=100);
    printf("%d",sum);
    return 0;
}*/


/*int main(){
    int n=1,sum=0;
    while(n<=100){
        sum=sum+n;
        a++;
    }
    printf("%d",sum);
    return 0;
}*/