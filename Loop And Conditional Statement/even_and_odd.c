#include<stdio.h>

int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    if(a%2==0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }
    return 0;
}