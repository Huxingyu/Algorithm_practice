#include <stdio.h>
#include <string.h>

typedef long long ll;

struct hu{
    char *name;
    ll age;
    char number[20];
}*one;

int main(){
    (*one).name="huxingyu";
    (*one).age=22;
    strcpy((*one).number,"201502031026");
    printf(" ");
    return 0;
}