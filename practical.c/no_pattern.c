#include <stdio.h>

int main() {
    int rows;

    do {
        printf("Enter the number of rows: ");
        scanf("%d", &rows);
        if (rows <= 0) {
            printf("Please enter a positive integer!\n");
        }
    } while (rows <= 0);

    int i = 1;
    do {
        int j = 1; 
        do {
            printf("%d", j);
            j++;
        } while (j <= i);
        printf("\n"); 
        i++;
    } while (i <= rows);

    return 0;
}