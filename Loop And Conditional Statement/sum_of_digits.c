#include<stdio.h>

 int main() {
    int a,b,s=0;  
    printf("Enter a number:");
    scanf("%d",&a);  
    while(a>0) { 
        b=a%10;  
        s+=b;  
        a/=10;  
    }
    printf("Sum is:%d",s);  
    return 0;
}