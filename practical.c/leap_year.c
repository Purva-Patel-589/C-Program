#include<stdio.h>

int main(){
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    if(a%400==0){
        printf("It is leap year.\n");
    }
    else if(a%100==0){
        printf("It is not leap year.\n");
    }
    else if(a%4==0){
        printf("It is leap year.\n");
    }
    else{
        printf("It is not a leap year.\n");
    }
    return 0;
}