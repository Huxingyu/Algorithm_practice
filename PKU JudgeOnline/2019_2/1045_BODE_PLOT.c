//Author=huxingyu
//Time=2019-2-3

#include <stdio.h>

int main(){
    int n;
    double vs,r,c,w;
    double vr;

    _scanf_s_l("%lf %lf %lf %d",&vs,&r,&c,&n);

    while(n>0){
        _scanf_s_l("%lf",&w);
        vr = (c*r*w*vs)/(sqrt(1+c*c*r*r*w*w));
        printf_s("%.3lf",vr);
        n--;
    }
    return 0;
}

//"int n" and "int n=0"can make something different?
//"lf" is long double means.
//scanf_s is now used command,we just not used "scanf" now.
//use "while(n>0)" and (n--).
//"return 0"means we just sent a "i exit now normally" to pc.