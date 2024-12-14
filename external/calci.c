#include <stdio.h>
#include <math.h>

void displayMenu() {
    printf("************************* CALCULATOR ****************************\n");
    printf("1. Addition  2. Subtraction  3. Multiplication  4. Division  5. Power\n");
    printf("*****************************************************************\n");
}

int main() {
    int choice;
    char repeat;
    float num1, num2, result;
    do {
        displayMenu();
        printf("Enter your choice (1/2/3/4/5): ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Please try again.\n");
            continue;
        }
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);
        switch (choice) {
            case 1: // Addition
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2: // Subtraction
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3: // Multiplication
                result = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4: // Division
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero is not allowed.\n");
                }
                break;
            case 5: // Power
                result = pow(num1, num2);
                printf("%.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;
            default:
                printf("Invalid choice.\n");
        }
        printf("*****************************************************************\n");
        printf("Do you want to perform another operation (For YES, press y / For NO, press n): ");
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');
    printf("***************************** THANK YOU **************************\n");
    return 0;
}