#include <stdio.h>

int main(){
    char str[5];
    for(int i=0;i<5;i++){
        scanf("%d",str+i);//scanf("%d",&str[i])
    }
    for(int i;i<5;i++){
        printf("%d ",*(str+i));
    }
    return 0;
}

/*int main(){
    int a;
    int *p=&a;
    scanf("%d",&*p);
    printf("a=%d,*p=%d",a,*p);
    return 0;
}*/


/*int main(){
    int a = 233;
    int* p=&a;
    printf("%d",*p);
    return 0;
}*/