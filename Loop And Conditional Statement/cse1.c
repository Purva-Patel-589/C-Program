#include<stdio.h>

int main(){
    float a,b,c,d;
    printf("enter your marks of chem:");
    scanf("%f",&a);
    printf("enter your marks of phy :");
    scanf("%f",&b);
    printf("enter your marks of maths :");
    scanf("%f",&c);
    printf("enter your marks of eng :");
    scanf("%f",&d);
    
    printf("total marks is:%f\n",a+b+c+d);
    printf("percentage:%f",(a+b+c+d)/4);

    return 0;
}