#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Enter the value of d:");
    scanf("%d",&d);
    printf("%d\n",(a<b)&&(c<d));
    printf("%d\n",(a>b)&&(c>d));
    printf("%d\n",(a<=b)&&(c<=d));
    printf("%d\n",(a>=b)&&(c>=d));
    printf("%d\n",(a==b)&&(c==d));
    printf("%d\n",(a!=b)&&(c!=d));
    
    printf("%d\n",(a<b)||(c<d));
    printf("%d\n",(a>b)||(c>d));
    printf("%d\n",(a<=b)||(c<=d));
    printf("%d\n",(a>=b)||(c>=d));
    printf("%d\n",(a==b)||(c==d));
    printf("%d\n",(a!=b)||(c!=d));

    return 0;
}