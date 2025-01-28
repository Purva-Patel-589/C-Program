#include<stdio.h>

int i=0;

int num(int n){
    i++;
    if(i<=n) {
        printf("%d ",i);
        num(n);
    }
}

int main(){
    int n;
    printf("Enter the last number:-");
    scanf("%d",&n);
    num(n);
}