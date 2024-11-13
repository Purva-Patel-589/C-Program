// Armstrong Number
#include <stdio.h>
#include <math.h>

int isArmstrong(int number) {
    int originalNumber = number, remainder, result = 0;
    int numDigits = 0;
    while (originalNumber != 0) {
        originalNumber /= 10;
        numDigits++;
    }
    originalNumber = number;
    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += pow(remainder, numDigits);
        originalNumber /= 10;
    }
    return (result == number);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }
    return 0;
}