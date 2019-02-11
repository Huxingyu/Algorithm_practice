#include <stdio.h>

int main(){
    int n;
    double m;
    //char str1[50],str2[10];
    char str1[50] = "123,3.14,hello",str2[10];
    sscanf(str1,"%d,%lf,%s",&n,&m,str2);
    printf("%d,%.2f,%s\n",n,m,str2);
    puts(str2);
    return 0;
}