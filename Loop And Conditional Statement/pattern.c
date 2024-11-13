#include<stdio.h>

int pattern(int rows){
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i-1;j++){
            printf(" ");
        }
        for(int k=0;k<2*i+1;k++){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int rows;
    printf("Enter the no. of rows:");
    scanf("%d",&rows);
    pattern(rows);
    return 0;
}