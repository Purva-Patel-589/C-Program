#include<stdio.h>

int main(){
    int a;
    printf("Enter your number(1 to 5):");
    scanf("%d",&a);
    switch(a)
    {
    case 1 : printf("C language.");
        break;
    case 2 : printf("C++ language.");
        break;
    case 3 : printf("Java language.");
        break;
    case 4 : printf("Python language.");
        break;
    case 5 : printf("R language.");
        break;
    default : printf("Invalid input");
    }
}