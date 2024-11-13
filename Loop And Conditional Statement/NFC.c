#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

const char* get_timestamp() {
    static char buffer[20];
    time_t now = time(NULL);
    struct tm *t = localtime(&now);
    strftime(buffer, sizeof(buffer)-1, "%Y-%m-%d %H:%M:%S", t);
    return buffer;
}

void log_attendance(const char* student_id) {
    FILE *file = fopen("attendance.csv", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    fprintf(file, "%s, %s\n", student_id, get_timestamp());
    fclose(file);
}

void read_nfc_card() {
    char student_id[20];
    printf("Tap your NFC card...\n");  
    printf("Enter student ID (simulated): ");
    scanf("%s", student_id);  
    log_attendance(student_id);
    printf("Attendance logged for student ID: %s\n", student_id);
}

int main() {
    while (1) {
        read_nfc_card();
        printf("Press Ctrl+C to exit.\n");
    }
    return 0;
}