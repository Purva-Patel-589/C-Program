#include <stdio.h>
#include <string.h>

int isValidMobileNumber(char number[]) {
    if (strlen(number) != 10) {
        return 0;
    }

    for (int i = 0; i < 10; i++) {
        if (number[i] < '0' || number[i] > '9') {
            return 0; 
        }
    }

    if (number[0] != '7' && number[0] != '8' && number[0] != '9') {
        return 0;
    }
    return 1;
}

int main() {
    char mobileNumber[20];
    printf("Enter the mobile number: ");
    scanf("%s", mobileNumber);

    if (isValidMobileNumber(mobileNumber)) {
        printf("The mobile number is valid.\n");
    } else {
        printf("The mobile number is invalid.\n");
    }
    return 0;
}
