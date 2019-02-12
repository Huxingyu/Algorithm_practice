#include <stdio.h>
#include <math.h>
const double eps=1e-8
#define equl(a,b) ((fabs((a)-(b)))<eps)

int main(){
    double a,b;
    scanf("%lf%lf",&a,&b);
    if(a==b){
        printf("完全相等");
    }
    else if(equl(a,b)){
        printf("精度足够");
    } 
    else{
        printf("qnimade");
    }
    return 0;
}

//精度控制