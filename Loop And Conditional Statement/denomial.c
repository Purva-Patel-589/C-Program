#include<stdio.h>

int withdraw(int amount){
    int n_500=0, n_200=0, n_100=0, n_50=0, n_20=0;
    if(amount>=500){
        n_500 = amount/500;
        amount %= 500;
    }
    if(amount>=200){
        n_200 = amount/200;
        amount %= 200;
    }
    if(amount>=100){
        n_100 = amount/100;
        amount %= 100;
    }
    if(amount>=50){
        n_50 = amount/50;
        amount %= 50;
    }
    if(amount>=20){
        n_20 = amount/20;
        amount %= 20;
    }
    printf("Dispended notes:\n");
    if(n_500){
        printf("500:%d\n",n_500);
    }
    if(n_200){
        printf("200:%d\n",n_200);
    }
    if(n_100){
        printf("100:%d\n",n_100);
    }
    if(n_50){
        printf("50:%d\n",n_50);
    }
    if(n_20){
        printf("20:%d\n",n_20);
    }
}

int main(){
    int balance = 2500, withdrawal;
    printf("Enter the amount you want to withdraw(in the multiple of 20):");
    scanf("%d",&withdrawal);

    if(withdrawal%20 != 0){
        printf("Your amount is not the multiple of 20.\n");
    }
    else if(withdrawal>balance){
        printf("Insufficient Balance.\n");
    }
    else{
        withdraw(withdrawal);
        balance -= withdrawal;
        printf("Available balance left is %d\n",balance);
    }
    return 0;
}