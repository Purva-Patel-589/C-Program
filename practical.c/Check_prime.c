#include<stdio.h>

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    int ans=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans=0;
        }
    }
    if(!ans){
        printf("%d is not a prime numbre.\n",n);
    }else{
        printf("%d is a prime numbre.\n",n);
    }
}