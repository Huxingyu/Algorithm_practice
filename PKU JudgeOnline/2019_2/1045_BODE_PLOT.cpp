#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double vs,r,c,w;
    double vr;

    scanf("%lf %lf %lf %d",&vs,&r,&c,&n);

    while(n>0){
        scanf("%lf",&w);
        vr = (c*r*w*vs)/(sqrt(1+c*c*r*r*w*w));
        printf("%.3lf\n",vr);
        n--;
    }
    return 0;
}