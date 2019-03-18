//分数计算

#include <stdio.h>

struct Fraction{
    int up,down;
};

Fraction add(Fraction x,Fraction y){
    Fraction result;
    result.up=x.up*y.down + y.up*x.down;
    result.down=x.down * y.down;
    return result;
}

int main(){}