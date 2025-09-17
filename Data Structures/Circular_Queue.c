#include <stdio.h>
#include <stdlib.h>

#define max 3

void insert();
void delet();
void display();

int q[max], front = -1, rear = -1;

void main() {
    int ch;
    
    printf("\nCircular Queue operations\n");
    printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: insert(); break;
            case 2: delet(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid option\n");
        }
    }
}

void insert() {
    int x;
    if ((rear + 1) % max == front) {
        printf("Queue is overflow\n");
        return;
    }
    printf("Enter element to insert: ");
    scanf("%d", &x);
    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % max;
    q[rear] = x;
}

void delet() {
    int a;
    if (rear == -1) {
        printf("Queue is underflow\n");
        return;
    }
    a = q[front];
    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % max;
    printf("Deleted element is: %d\n", a);
}

void display() {
    if (rear == -1) {
        printf("Queue is underflow\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", q[i]);
        if (i == rear) break;
        i = (i + 1) % max;
    }
    printf("\nFront is at: %d\n", q[front]);
    printf("Rear is at: %d\n", q[rear]);
}