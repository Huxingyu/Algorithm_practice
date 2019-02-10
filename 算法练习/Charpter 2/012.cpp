//try some math functions
//fabs,floor,ceil,pow,sqrt
#include <stdio.h>
#include <math.h>
#define b 2.1

const double a=-9; 
const double pi=acos(-1);

int main(){
    printf("fabs(a)=%.2f\n",fabs(a));
    printf("floor(b)=%f ceil(b)=%.f\n",floor(b),ceil(b));
    printf("%.2f\n",pow(2.0,3.0));
    printf("%.f\n",sqrt(9));
    printf("%.f\n",log(2.7));
    printf("%.f\n",tan(pi*45/180));
    printf("%.f",round(b));
    return 0;
}