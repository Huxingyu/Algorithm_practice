#include <iostream>
#include <stdio.h>
#include <utility>

using namespace std;

int main(int argc,char* argv[]){
    pair<int,int>p1 (2,2);
    pair<int,int>p2 (2,1);
    pair<int,int>p3 (3,3);
    if(p1>p2){
        printf("ok");
    }
    return 0;
}