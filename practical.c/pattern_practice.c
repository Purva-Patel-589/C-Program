#include<stdio.h>

int main(){
    int n;
    printf("Enetr your rows:-");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=1;j<=i-1;j++){
            printf("");
        }
        for(int k=1;k<=n-i+1;k++){
            printf("%d ",n-i+1);
        }
        printf("\n");
    }
}