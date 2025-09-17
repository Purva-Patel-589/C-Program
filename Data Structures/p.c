#include<stdio.h>
#include<stdlib.h>

struct Node {
        int data;
        struct Node* next;
};

struct Node *head=NULL;

void insert(int data){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    struct Node* temp = head;

    if (head==NULL){
        head = newNode;
    }else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next = newNode;
    }
}

void Display(){

    struct Node* temp = head;

    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70); 
    Display();
    return 0;
}