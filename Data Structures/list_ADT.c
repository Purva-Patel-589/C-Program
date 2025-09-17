#include <stdio.h>

int main() {
    int list[100], size = 0, choice, value, position, i, found;
    printf("Welcome to List ADT Operations\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Create List\n");
        printf("2. Insert Value\n");
        printf("3. Delete Value\n");
        printf("4. Display List\n");
        printf("5. Search Value\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the size of the list: ");
                scanf("%d", &size);
                if (size > 100) {
                    printf("Size exceeds maximum limit of 100.\n");
                    size = 0;
                    break;
                }
                printf("Enter %d elements: ", size);
                for (i = 0; i < size; i++) {
                    scanf("%d", &list[i]);
                }
                printf("List created successfully.\n");
                break;

            case 2:
                if (size == 100) {
                    printf("List is full. Cannot insert more values.\n");
                } else {
                    printf("Enter the value to insert: ");
                    scanf("%d", &value);
                    printf("Enter the position (1 to %d): ", size+1);
                    scanf("%d", &position);
                    if (position < 1 || position > size + 1) {
                        printf("Invalid position.\n");
                    } else {
                        for (i = size; i >= position; i--) {
                            list[i] = list[i - 1];
                        }
                        list[position - 1] = value;
                        size++;
                        printf("Value inserted successfully.\n");
                    }
                }
                break;

            case 3:
                if (size == 0) {
                    printf("List is empty. Nothing to delete.\n");
                } else {
                    printf("Enter the position (1 to %d) of the value to delete: ", size);
                    scanf("%d", &position);
                    if (position < 1 || position > size) {
                        printf("Invalid position.\n");
                    } else {
                        for (i = position - 1; i < size - 1; i++) {
                            list[i] = list[i + 1];
                        }
                        size--;
                        printf("Value deleted successfully.\n");
                    }
                }
                break;

            case 4:
                if (size == 0) {
                    printf("List is empty.\n");
                } else {
                    printf("List elements: ");
                    for (i = 0; i < size; i++) {
                        printf("%d ", list[i]);
                    }
                    printf("\n");
                }
                break;

            case 5:

                if (size == 0) {
                    printf("List is empty.\n");
                } else {
                    printf("Enter the value to search: ");
                    scanf("%d", &value);
                    found = 0;
                    for (i = 0; i < size; i++) {
                        if (list[i] == value) {
                            printf("Value found at position %d.\n", i + 1);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Value not found in the list.\n");
                    }
                }
                break;

            case 6:            
                printf("Exiting the program. Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}