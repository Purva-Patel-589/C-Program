#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    if(a>b){
        printf("True\n");
    }
    if(a<b){
        printf("False\n");
    }
    return 0;
}