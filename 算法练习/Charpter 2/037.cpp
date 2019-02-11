#include <stdio.h>

struct hu{
    char *name;
    int age;
    hu(char *_name,int _age){
        name = _name;
        age = _age;
    }
};

hu one = hu("huxingyu",22);

int main(){
    printf("%s,%d",one.name,one.age);
    return 0;
}

//智慧的结晶