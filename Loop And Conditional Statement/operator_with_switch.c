#include<stdio.h>

int main(){
    int a,b;
    char op;
    printf("Enter the operator:");
    scanf("%c",&op);
    printf("Enter your number :");
    scanf("%d",&a);
    printf("Enter your other number :");
    scanf("%d",&b);
    
    
    switch (op)
    {
    case '+' : printf("%d",a+b);
        break;
    case '-' : printf("%d",a-b);
        break;
    case '*' : printf("%d",a*b);
        break;
    case '%' : printf("%d",a%b);
        break;
    case '/' : printf("%d",a/b);
        break;
    default:printf("Enter correct operator.");
    }
    return 0;
}