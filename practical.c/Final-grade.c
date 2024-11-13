#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float average;
    char grade;
    printf("Enter the marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid marks. Please enter values between 0 and 100.\n");
            return 1;
        }
        total += marks[i];
    }
    average = total / 5.0;
    if (average >= 90) {
        grade = 'A';
    } else if (average >= 80) {
        grade = 'B';
    } else if (average >= 70) {
        grade = 'C';
    } else if (average >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    printf("\nTotal Marks: %d\n", total);
    printf("Average Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);
    return 0;
}
