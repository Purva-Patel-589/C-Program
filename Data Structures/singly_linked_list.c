    #include <stdio.h>
    #include <stdlib.h>

    struct Node {
        int data;
        struct Node* next;
    };

    struct Node* createNode(int data) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        return newNode;
    }

    void insertAtBegin(struct Node** head, int data) {
        struct Node* newNode = createNode(data);
        newNode->next = *head;
        *head = newNode;
    }

    void insertAtEnd(struct Node** head, int data) {
        struct Node* newNode = createNode(data);
        if (*head == NULL) {
            *head = newNode;
            return;
        }
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(struct Node** head, int data, int position) {
        if (position < 1) {
            printf("Invalid position!\n");
            return;
        }
        struct Node* newNode = createNode(data);
        if (position == 1) {
            newNode->next = *head;
            *head = newNode;
            return;
        }
        struct Node* temp = *head;
        for (int i = 1; temp != NULL && i < position - 1; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Position out of range\n");
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteAtBegin(struct Node** head) {
        if (*head == NULL) {
            printf("List is empty\n");
            return;
        }
        struct Node* temp = *head;
        *head = (*head)->next;
        free(temp);
    }

    void deleteAtEnd(struct Node** head) {
        if (*head == NULL) {
            printf("List is empty\n");
            return;
        }
        struct Node* temp = *head;
        if (temp->next == NULL) {
            *head = NULL;
            free(temp);
            return;
        }
        struct Node* prev = NULL;
        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
    }

    void deleteAtPosition(struct Node** head, int position) {
        if (*head == NULL || position < 1) {
            printf("Invalid position or empty list\n");
            return;
        }
        struct Node* temp = *head;
        if (position == 1) {
            *head = temp->next;
            free(temp);
            return;
        }
        struct Node* prev = NULL;
        for (int i = 1; temp != NULL && i < position; i++) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Position out of range\n");
            return;
        }
        prev->next = temp->next;
        free(temp);
    }

    void display(struct Node* head) {
        if (head == NULL) {
            printf("List is empty\n");
            return;
        }
        struct Node* temp = head;
        while (temp != NULL) {
            printf("%d -> ", temp->data);
            temp = temp->next;
        }
        printf("NULL\n");
    }

    int main() {
        struct Node* head = NULL;
        
        insertAtEnd(&head, 10);
        insertAtEnd(&head, 20);
        insertAtEnd(&head, 30);
        printf("List after inserting at end: ");
        display(head);
        
        insertAtBegin(&head, 5);
        printf("List after inserting at begin: ");
        display(head);
        
        insertAtPosition(&head, 15, 3);
        printf("List after inserting at position 3: ");
        display(head);
        
        deleteAtBegin(&head);
        printf("List after deleting from begin: ");
        display(head);
        
        deleteAtEnd(&head);
        printf("List after deleting from end: ");
        display(head);
        
        deleteAtPosition(&head, 2);
        printf("List after deleting from position 2: ");
        display(head);
        
        return 0;
    }