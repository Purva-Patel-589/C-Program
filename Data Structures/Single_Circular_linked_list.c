#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode;
    return newNode;
}

void insertAtBegin(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }                        
    struct Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != head)
        temp = temp->next;
    temp->next = newNode;
    newNode->next = head;
}

void insertAtPosition(int data, int position) {
    if (position == 1) {
        insertAtBegin(data);
        return;
    }
    struct Node* newNode = createNode(data);
    struct Node* temp = head;
    for (int i = 1; temp->next != head && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp->next == head && position != 2) {
        printf("Position out of range\n");
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtBegin() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    struct Node* last = head;
    while (last->next != head)
        last = last->next;
    if (head->next == head) {
        head = NULL;
    } else {
        head = head->next;
        last->next = head;
    }
    free(temp);
}

void deleteAtEnd() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head) {
        head = NULL;
    } else {
        prev->next = head;
    }
    free(temp);
}

void deleteAtPosition(int position) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    if (position == 1) {
        deleteAtBegin();
        return;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    for (int i = 1; temp->next != head && i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == head) {
        printf("Position out of range\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}

void deleteList() {
    while (head != NULL)
        deleteAtBegin();
    printf("List deleted successfully\n");
}

void display() {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    display();
    
    insertAtBegin(5);
    display();
    
    insertAtPosition(15, 3);
    display();
    
    deleteAtBegin();
    display();
    
    deleteAtEnd();
    display();
    
    deleteAtPosition(2);
    display();
    
    deleteList();
    display();
    
    return 0;
}