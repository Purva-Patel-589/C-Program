#include<stdio.h>

int main(){
    int n,rem,reverse=0;
    printf("Enter the number you want to reverse:");
    scanf("%d",&n);  

    while (n != 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reversed number = %d", reverse);
    return 0;
}