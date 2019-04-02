//node->insert

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    node* next;
};

node* create(int Array[]){
    node *p,*pre,*head;
    head = new node;
    head->next = NULL;
    pre = head;
    for(int i=0;i<5;i++){
        p = new node;
        p->data = Array[i];
        p->next = NULL;
        pre->next = p;
        pre = p;
    } 
    return head;
}

void insert(node* head,int pos,int x){
    node* p=head;
    for(int i=0;i<pos-1;i++){
        p = p->next;
    }
    node* q=new node;
    q->data = x;
    q->next = p->next;
    p->next = q;
}

int main(){
    int Array[]={1,2,3,4,5};
    node* l=create(Array);
    insert(l,2,6);
    while(l!=NULL){
        printf("%d",l->data);
        l=l->next;
    }
    return 0;
}