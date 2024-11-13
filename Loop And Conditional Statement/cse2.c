#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("a&b values are:%d %d\n",a,b);
    printf("sum of two values are:%d\n",a+b);
    printf("subtraction of a and b is:%d\n",a-b);
    printf("multiplication of a and b is:%d\n",a*b);
    printf("quationt of a and b is:%f\n",(float)a/(float)b);
    printf("remainder of a and b is:%d\n",a%b);
    return 0;
}