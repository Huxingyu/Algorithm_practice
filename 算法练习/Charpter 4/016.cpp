#include <stdio.h>

int nums[10],n=10;

int main(){
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=1;i<n;i++){
        if(nums[i]>0){
            nums[i]--;
            printf("%d",i);
            break;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<nums[i];j++){
            printf("%d",i);
        }
    }
    return 0;
}

//simple greed algorithm