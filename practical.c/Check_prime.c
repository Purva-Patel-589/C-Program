#include<stdio.h>

int is_prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    
    if(is_prime(n)){
        printf("%d is a prime numbre.\n",n);
    }else{
        printf("%d is not a prime numbre.\n",n);
    }
}