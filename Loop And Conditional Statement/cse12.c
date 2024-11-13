#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    if(a==b){
        printf("Equal\n");
    }
    else if(a>b){
        printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
    return 0;
}