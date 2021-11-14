#include "header_include.h"

//This is a non self-balancing Binary search tree just to put in elements, Please do not bother me if it does not balance itself

typedef struct Leaf{
    int data;
    Leaf* left;
    Leaf* right;
};

Leaf* head=NULL;

Leaf* add_leaf(int data){
    Leaf* temp=(Leaf*)malloc(sizeof(Leaf*));
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

Leaf* insert(Leaf* node, int data){
if(node==NULL) return add_leaf(data);
if(data<node->data){
    node->left=insert(node->left,data);
}
else{
    node->right=insert(node->right,data);
}
return node;
}


void inorder(Leaf* root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}

void pre_order(Leaf* root){
    if(root!=NULL){
        printf("%d",root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}

void post_order(Leaf* root){
    if(root!=NULL){
        post_order(root->left);
        post_order(root->right);
        printf("%d",root->data);
    }
}