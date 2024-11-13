#include<stdio.h>

int main(){
    int g;
    printf("Enter your percentage:");
    scanf("%d",&g);
    if (g<=100 && g>=0){
        switch(g/10)
        {
        case 10 : printf("Your grade is O.");
            break;
        case 9 : printf("Your grade is A.");
            break;
        case 8 : printf("Your grade is B.");
            break;
        case 7 : printf("Your grade is C.");
            break;
        case 6 : printf("Your grade is D.");
            break;
        case 5 : printf("Your grade is E.");
            break;
        default : printf("you are FAIL.");
        }
    }else{
        printf("Enter valid percentage.");
    }
    return 0;
}