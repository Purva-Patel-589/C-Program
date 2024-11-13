#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter the marks of chem:");
    scanf("%d",&a);
    printf("Enter the marks of phy:");
    scanf("%d",&b);
    printf("Enter the marks of math:");
    scanf("%d",&c);
    printf("The average of your marks is %d\n",(a+b+c)/3);
    return 0;
}