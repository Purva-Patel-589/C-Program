#include <stdio.h>

typedef int Array[5];  // 'Array' is an alias for an array of 5 integers

int main() {
    Array numbers = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
