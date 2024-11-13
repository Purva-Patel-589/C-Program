#include<stdio.h>

int main(){
    int n,result=0;
    printf("Enter numbers to calculate their sum. Enter -1 to terminate.\n");
    do{
        printf("Enter your number: ");
        scanf("%d",&n);
        if(n!= -1){
            result+=n;
        }
    }while(n!= -1);
    printf("The total sum is %d.\n",result);
    return 0;
}