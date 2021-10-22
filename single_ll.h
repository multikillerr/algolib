#include "header_include.h"

struct Node{
    int data;
    struct Node *link;
};

struct Node *head=NULL;

void beginsert(int data){
struct Node *node=(struct Node *)malloc(sizeof(struct Node *));
node->data=data;
node->link=head;
head=node;
}

void lastInsert(int data){
    struct Node *node=(struct Node *)malloc(sizeof(struct Node *));
    struct Node *ptr=head;
    while(ptr->link!=NULL){
        ptr=ptr->link;
    }
    ptr->link=node;
    node->link=NULL;
}

void midInsert(int data, int pivot){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *ptr=head;
    while(ptr->data!=pivot){
        ptr=ptr->link;
    }
    node->data=data;
    node->link=ptr->link;
    ptr->link=node;
}

void printList(){
    struct Node *ptr=head;
    printf("[NULL]\t");
    while(ptr->link!=NULL){
        printf("%d\t",ptr->data);
        ptr=ptr->link;
    }
    printf("[NULL]\t");
    printf("\n");
}

void firstDelete(){
    struct Node *ptr=head;
    head=head->link;
    free(ptr);
}