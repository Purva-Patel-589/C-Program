#include <stdio.h>

int main() {
    char name[100];
    int length = 0;
    printf("Enter your name: ");
    gets(name); 
    while (name[length] != '\0') {
        length++;
    }
    printf("The length of your name is: %d\n", length);
    return 0;
}