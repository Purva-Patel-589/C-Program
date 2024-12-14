#include<stdio.h>
#include<math.h>

int main(){
    int n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=pow(i,i);
    }
    printf("The sum of the series is %d.",sum);
    return 0;
}