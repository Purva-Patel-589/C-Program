#include <stdio.h>

int main() {
    double income, tax;
    printf("Enter your income: ");
    scanf("%lf", &income);
    tax = (income <= 250000) ? 0 :
          (income <= 500000) ? income * 0.05 :
          (income <= 1000000) ? income * 0.10 :
          income * 0.20;
    printf("The calculated tax is: %.2lf\n", tax);
    return 0;
}
