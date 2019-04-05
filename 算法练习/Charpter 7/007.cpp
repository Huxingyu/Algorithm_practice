//C语言的伟大，在于指针的灵活性，使得它可以非常容易的操作内存中的地址和数据，这比其他高级语言更加灵活方便.
//面向对象使用对象引用机制间接地实现了指针的某些功能.
//但是在没有指针的时候，用数组代替指针来描述单链表
//用数组描述的链表叫做静态链表，这种描述方法叫做游标实现法

#include <stdio.h>

#define maxsize 10

// typedef int ElemType;
// typedef struct{
//     ElemType data;
//     int cur;
// }status,StaticLinkList[maxsize];

struct node{
    int data;
    int next;
}_node[maxsize];

node Inilist(_node space){  //链表初始化->数组初始化
    for(int i=0;i<maxsize-1;i++){
        space[i].cur = i+1;
    }
    space[maxsize-1].cur=0;
    return ok;              //啥意思
}