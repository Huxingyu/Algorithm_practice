//这个更适合解决问题，层次比较分明

#include <stdio.h>
#include <algorithm>

using namespace std;

const int m=4;
int x,MAX,MIN,num[m];

bool cmp(int a,int b){  //递减顺序
    return a>b;
}

void to_array(int x){
    for(int i=0;i<m;i++){
        num[i]=x%10;
        x/=10;
    }
}

int to_number(int num[]){
    int sum=0;
    for(int i=0;i<m;i++){
        sum = sum*10 + num[i]; 
    }
    return sum;
}

int main(){
    scanf("%d",&x);
    while(1){
        to_array(x);
        sort(num,num+4);
        MIN = to_number(num);
        sort(num,num+4,cmp);
        MAX = to_number(num);
        int ans = MAX - MIN;
        printf("MAX%d-MIN%d=%d",MAX,MIN,ans);
        while(ans==0 || ans==6174){
            break;
        }
    }
    return 0;
}