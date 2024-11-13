#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the size of the matrix (n x n): ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    printf("The sum of the principal diagonal elements is: %d\n", sum);
    return 0;
}
