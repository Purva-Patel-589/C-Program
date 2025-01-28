#include <stdio.h>
#include <stdlib.h>

void readFile() {
    FILE *file;
    int n, i, value;

    scanf("%d", &n);
    file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &value);
        fprintf(file, "%d\n", value);
    }
    fclose(file);

    file = fopen("output.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }

    while (fscanf(file, "%d", &value) != EOF) {
        printf("%d\n", value);
    }

    fclose(file); 
}

int main() {
    readFile();
    return 0;
}
