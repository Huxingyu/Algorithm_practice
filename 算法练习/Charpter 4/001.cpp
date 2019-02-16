//简单排序，算法复杂度O(N^2)

#include <stdio.h>

int number[100];

void exchange(int _number[],int n){
    for(int i=0;i<n;i++){
        int m=i;
        for(int j=i;j<n;j++){
            if( _number[j]<_number[m]){
                m=j;
            }
        }
        int temp = _number[m];
        _number[m] = _number[i];
        _number[i] = temp;
    }
}

int main(){
    int n=0;
    while(scanf("%d",&number[n])!=EOF){
        n++;
    }
    exchange(number,n);
    for(int i=0;i<n;i++){
        printf("%d ",number[i]);
    }
    return 0;
}

//void exchange(int _number[],int n){
//     int min= _number[0];
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if( _number[j]<min){
//                 min = _number[j];
//             }
//         }
//     }
// }