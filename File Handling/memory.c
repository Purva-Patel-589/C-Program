#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n = 5;

    // Allocating memory for an array of 5 integers
    arr = (int*) malloc(n * sizeof(int));

    // Checking if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Initializing and printing array elements
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;  // Assign values
        printf("%d ", arr[i]);
    }

    // Freeing the allocated memory
    free(arr);

    return 0;
}
