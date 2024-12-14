#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    if (rows <= 0) {
        printf("Please enter a positive integer!\n");
    }
    int i = 1;
    do {
        int j = 1; 
        do {
            printf("%d ",i);
            j++;
        } while (j <= i);
        printf("\n"); 
        i++;
    } while (i <= rows);
    return 0;
}
