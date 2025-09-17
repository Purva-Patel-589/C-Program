#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node *create(){
    int x;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value(enter -1 no node):");
    scanf("%d",&x);
    if(x==-1){
        return 0;
    }
    newnode->data=x;
    printf("Enter the value to the left of %d:",x);
    newnode->left=create();
    printf("Enter the value to the right of %d:",x);
    newnode->right=create();
    return newnode;
}

int main(){
    struct node *root;
    root=0;
    root=create();
}