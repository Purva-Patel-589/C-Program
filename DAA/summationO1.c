// O(1) Time Complexity
#include <stdio.h>
#include <math.h>

int main() {
    int x, n;
    float sum;
    
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter number of terms n: ");
    scanf("%d", &n);
    
    if(x == 1) {
        sum = n;
    } else {
        sum = (pow(x, n) - 1) / (x - 1);
    }
    
    printf("Sum of series is: %.2f\n", sum);
    return 0;
}