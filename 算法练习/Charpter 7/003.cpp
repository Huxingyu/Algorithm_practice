//动态链表

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* next;
};

node* create(int Array[]){
    node *p,*pre,*head;
    head = new node;
    head->next=NULL;
    pre = head;
    for(int i=0;i<5;i++){
        p = new node;
        p->data=Array[i];
        p->next=NULL;
        pre->next=p;
        pre = p;
    }
    return head;
}

int main(int argc,char argv[]){
    int Array[]={1,2,3,4,5};
    node* l=create(Array);
    l=l->next;
    while(l!=NULL){
        printf("%d",l->data);
        l=l->next;
    }
    return 0;
}