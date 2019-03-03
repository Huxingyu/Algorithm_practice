#include <stdio.h>

const int max=5;

int find(int num[],int x);

int main(){
    int x,y,num[max];
    scanf("%d",&x);
    for(int i=0;i<max;i++){
        scanf("%d",&num[i]);
    }
    y=find(num,x);
    printf("%d",y);
    return 0;
}

int find(int num[],int x){
    int count;
    int i=0,j=max-1;
    while(i<j){ //(i<=j)->(i<j)
        if(num[i]+num[j]==x){
            count++;
            i++;
            j--;
        }
        else if(num[i]+num[j]>x){
            j--;
        }
        else{
            i++;
        }
    }
    return count;
}

//O(n)