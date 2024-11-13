#include <stdio.h>

int main() {
    int number;
    printf("Enter a number to check eligibility: ");
    scanf("%d", &number);
    if (number >= 10 && number <= 100 && number % 7 != 0) {
        printf("Congratulations! You are eligible to unlock the next level.\n");
    } else {
        printf("Sorry, you do not meet the criteria to unlock the next level.\n");
    }
    return 0;
}
