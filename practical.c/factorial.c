#include<stdio.h>

int main(){
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
    }
    printf("The factorial of number is:%d\n",s);
    return 0;
}