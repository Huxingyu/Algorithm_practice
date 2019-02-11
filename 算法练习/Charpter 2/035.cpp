#include <stdio.h>
#include <string.h>

struct hu{
    int age;
    char *name;
    char *number;
    char cm[10];
}one;

int main(){ 
    one.age = 22;    
    one.name = "huxingyu";
    one.number = "201502031026";
    strcpy(one.cm,"21");    
    printf("%d\n%s\n%s\n%s",one.age,one.name,one.number,one.cm);
    return 0;
}