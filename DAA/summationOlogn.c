// O(log n) Time Complexity
#include <stdio.h>

float power(int base, int exponent) {
    if(exponent == 0) return 1;
    float temp = power(base, exponent/2);
    if(exponent % 2 == 0) {
        return temp * temp;
    } else {
        return base * temp * temp;
    }
}

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
        sum = (power(x, n) - 1) / (x - 1);
    }
    
    printf("Sum of series is: %.2f\n", sum);
    return 0;
}