//分数化简

#include <stdio.h>
#include <math.h>

struct Fraction{
    int up,down;
};

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

Fraction reduction(Fraction result){ //这个很有意思
    if(result.down<0){
        result.up=-result.up;
        result.down=-result.down;
    }
    if(result.up==0){
        result.down=1;
    }
    else{
        int x=gcd(abs(result.up),abs(result.down));
        result.up /=x;
        result.down /=x;
    }
    return result;  //这个对应Fraction reduction
}

int main(){
    Fraction huxingyu;
    int x,y;
    scanf("%d%d",&x,&y);
    huxingyu.up=x;
    huxingyu.down=y;
    reduction(huxingyu);
    return 0;
}