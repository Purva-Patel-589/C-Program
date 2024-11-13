#include<stdio.h>

int main() {
    int n;
    printf("enter a no:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    printf("arr[%d]=%d\n ",i,arr[i]);
    }
    printf("Reverse order:");
    for(int i=n-1;i>=0;i--){
        printf("%d,",arr[i]);
    }
    return 0;
}