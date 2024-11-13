#include <stdio.h>

int main() {
    int n;
    printf("Enter the no of element in array: ");
    scanf("%d",&n);
    printf("Enter %d elements: \n", n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
      printf("arr[%d]=%d\n",i,arr[i]);
    }
    int max=arr[0];
    for(int i=0;i,i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The max value is %d\n",max);
    int min=arr[0];
    for(int i=0;i,i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("The min value is %d", min);
    return 0;
}