#include<stdio.h>

int main(){
    printf("For rectangle:");
    int a,b;
    printf("Enter the value of one side(a):");
    scanf("%d",&a);
    printf("Enter the value of other side(b):");
    scanf("%d",&b);
    printf("The area is %d\n",a*b);

    printf("For square:");
    int s;
    printf("Enter the value of side(s):");
    scanf("%d",&s);
    printf("The area is %d\n",s*s);

    printf("For triangle:");
    float c,h;
    printf("Enter the value of base(c):");
    scanf("%f",&c);
    printf("Enter the value of height(h):");
    scanf("%f",&h);
    printf("The area is %f\n",(c*h)/2);

    return 0;
}