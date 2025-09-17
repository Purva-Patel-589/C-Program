#include <stdio.h>
#define SIZE 100

int tree[SIZE];

void initTree() {
    for (int i = 0; i < SIZE; i++)
        tree[i] = -1;
}

void insert(int value, int index) {
    if (tree[index] != -1) {
        printf("Node already exists at index %d\n", index);
    } else {
        tree[index] = value;
    }
}

void display() {
    printf("Binary Tree (Array Representation):\n");
    for (int i = 0; i < SIZE; i++) {
        if (tree[i] != -1)
            printf("Index %d: %d\n", i, tree[i]);
    }
}

int main() {
    initTree();
    insert(1, 0);        
    insert(2, 1);        
    insert(3, 2);        
    insert(4, 3);        
    display();

    return 0;
}