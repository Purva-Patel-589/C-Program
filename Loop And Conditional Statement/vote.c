#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of age:");
    scanf("%d",&a);
    (a>=18)?printf("Eligible to vote."):printf("Not Eligible to vote.");
    return 0;
}