#include<stdio.h>

int main(){
    int a,b,c,p;
    printf("Enter the marks of chem:");
    scanf("%d",&a);
    printf("Enter the marks of phy:");
    scanf("%d",&b);
    printf("Enter the marks of math:");
    scanf("%d",&c);
    p=(a+b+c)/3;
    if(p>=90){
        printf("Your grade is A+.");
    }
    else if((p>=80)&&(p<90)){
        printf("Your grade is A.");
    }
    else if((p>=70)&&(p<80)){
        printf("Your grade is B.");
    }
    else if((p>=60)&&(p<50)){
        printf("Your grade is C.");
    }
    else if((p>=50)&&(p<60)){
        printf("Your grade is D.");
    }
    else if((p>=40)&&(p<50)){
        printf("Your grade is E.");
    }
    else if((p>=33)&&(p<40)){
        printf("Your grade is F.");
    }
    else{
        printf("You are fail");
    }
    return 0;
}