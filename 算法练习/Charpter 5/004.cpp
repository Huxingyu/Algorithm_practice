//最小公倍数

#include <stdio.h>

int lcm(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return lcm(b,a%b);
    }
}

int main(){
    int a,b,x,y;
    while(scanf("%d%d",&a,&b)!=EOF){
        x=lcm(a,b);
        y=(a*b)/x;  //考虑溢出问题
        printf("%d",y);
    }
    return 0;
}