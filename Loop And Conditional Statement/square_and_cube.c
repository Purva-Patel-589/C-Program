#include<stdio.h>
#include<math.h>

int main(){
    float a;
    printf("Enter your no.(a):");
    scanf("%f",&a);
    printf("The square and cube the no. is: %.1lf ,%5.1lf\n",pow(a,2), pow(a,3));

    return 0;
}