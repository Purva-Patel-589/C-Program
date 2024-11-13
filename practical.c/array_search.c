#include <stdio.h>

int main() {
    int i, search, found = 0;
    int arr[10];
    printf("Enter 10 elements:- \n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }
    if (found == 1) {
        printf("Element %d is present at position %d.\n", search, i + 1);
    } else {
        printf("Element %d is not present in the array.\n", search);
    }
    return 0;
}