#include <stdio.h>

int main() {
    FILE *file;

    // Open the file in write mode
    file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing\n");
        return 1;
    }

    // Use a for loop to write numbers 1 to 5 into the file
    for (int i = 1; i <= 5; i++) {
        fprintf(file, "%d\n", i); // Write each number on a new line
    }
    fclose(file); // Close the file after writing
    printf("Numbers written to file successfully.\n");

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading\n");
        return 1;
    }

    printf("Numbers read from the file:\n");

    // Use a for loop to read and print each number from the file
    int number;
    for (; fscanf(file, "%d", &number) == 1; ) {
        printf("%d\n", number);
    }
    fclose(file); // Close the file after reading

    return 0;
}
