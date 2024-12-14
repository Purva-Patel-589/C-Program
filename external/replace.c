#include <stdio.h>

int main() {
    char str[100];
    int index;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the index to replace with '*': ");
    scanf("%d", &index);
    if (index >= 0 && str[index] != '\0') {
        str[index] = '*';
    } else {
        printf("Invalid index!\n");
    }
    printf("Modified string: %s\n", str);
    return 0;
}
