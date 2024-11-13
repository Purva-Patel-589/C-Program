#include <stdio.h>

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    double temp, convtemp;
    char choice;
    printf("Enter the temp value: ");
    scanf("%lf", &temp);
    printf("Enter your choice (for c to f type:f/F)&(for f to c type:c/C): ");
    scanf(" %c", &choice);
    if (choice == 'C' || choice == 'c') {
        convtemp = fahrenheitToCelsius(temp);
        printf("%.2lf Fahrenheit is %.2lf Celsius\n", temp, convtemp);
    } else if (choice == 'F' || choice == 'f') {
        convtemp = celsiusToFahrenheit(temp);
        printf("%.2lf Celsius is %.2lf Fahrenheit\n", temp, convtemp);
    } else {
        printf("Invalid choice! Please enter 'C' or 'F'.\n");
    }
    return 0;
}