#include <stdio.h>

int main(){
    int a[3][3],b[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*int main(){
    int a[5][6]={{1,2,3},{},{},{6,6,6,6,6,6},{}};
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

//二维数组都是从0开始
//二维数组的第一个元素不代表其地址，与一维数组不同