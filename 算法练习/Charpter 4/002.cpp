//插入排序，算法复杂度O(N^2)

#include <stdio.h>

int number[100];

void exchange(int _number[],int n){
    for(int i=1;i<n;i++){
        int j=i;
        int temp=_number[j];
        while(j>0 && temp < _number[j-1]){
            _number[j] = _number[j-1]; //后移
            j--;
        }
        _number[j] = temp;
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

// void exchange(int _number[],int n){
//     for(int i=1;i<n;i++){
//         int j=i;
//         while(j>1 && (_number[j]<_number[j-1])){
//             int temp = _number[j];
//             _number[j] = _number[j-1];
//             _number[j-1] = temp;
//             j--;
//         }
//     }
// }