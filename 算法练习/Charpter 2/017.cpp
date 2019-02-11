#include <stdio.h>

int main(){
    int temp;
    int a[10]={3,1,2,5,4};
    for(int i=1;i<5;i++){
        for(int j=0;j<5-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}



/*int main(){
    int temp,a=1,b=2;
    temp = b;
    b = a;
    a = temp;
    printf("a=%d b=%d",a,b);
    return 0;
}*/