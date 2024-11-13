#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,x1,x2,d;
    printf("Enter your co-efficiets for the equation:");
    scanf("%d %d %d",&a,&b,&c);
    d=(pow(b,2)-(4*a*c));
    if(d>=0){
        x1=((-b)+sqrt(d))/(2*a);
        printf("%d is your first root of the equation.\n",x1);
        x2=((-b)-sqrt(d))/(2*a);
        printf("%d is your second root of the equation.\n",x2);
    }else{
        printf("There are no real root.");
    }
    return 0;
}