// O(n) Time Complexity
#include <stdio.h>
#include <math.h>

int main() {
    int x, n, i;
    float sum = 0.0;
    
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter number of terms n: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        sum += pow(x, i);
    }
    
    printf("Sum of series is: %.2f\n", sum);
    return 0;
}