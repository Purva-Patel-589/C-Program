#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter your no.(a):");
    scanf("%d",&a);
    printf("Enter your no.(b):");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping the value of a and b is:a=%d ,b=%d\n",a,b);


    int d,e;
    printf("Enter your no.(d):");
    scanf("%d",&d);
    printf("Enter your no.(e):");
    scanf("%d",&e);
    d = d + e;
    e = d - e;
    d = d - e;
    printf("After swapping the value of d and e is:d=%d ,e=%d\n",d,e);
    return 0;
}