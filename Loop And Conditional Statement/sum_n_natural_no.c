#include<stdio.h>

int main(){
    int n;
    printf("Enter how many natural no. you want to add:");
    scanf("%d",&n);
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    printf("the sum of n natural number is:%d\n",s);
    
    return 0;
}