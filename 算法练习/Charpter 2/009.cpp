//try "putchar" and "getchar"
//b在这里只做了输入而没有存储
#include <stdio.h>

int main(){
    char a,b,c;
    a = getchar();
    b = getchar();
    getchar();
    c = getchar();
    putchar(a);
    putchar(b);
    putchar(c);
    return 0;
}