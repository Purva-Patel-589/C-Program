#include <stdio.h>

int main() {
    int a = 40; // 00101000
    int b = 77; // 01001101

    printf("a & b = %d\n", a & b);   // Bitwise AND
    printf("a | b = %d\n", a | b);   // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);   // Bitwise XOR
    printf("~a = %d\n", ~a);         // Bitwise NOT
    printf("a << 2 = %d\n", a << 2); // Left Shift
    printf("a >> 2 = %d\n", a >> 2); // Right Shift

    return 0;
}