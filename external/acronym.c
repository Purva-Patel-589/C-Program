#include<stdio.h>

int main(){
    char str[100],str1[100];
    printf("Enter a string:-");
    gets(str);
    int i=0,j=0;
    str1[j]=str[i];
    j++;
    while(str[i]!='\0'){
        if(str[i]==' '){
            str1[j]=str[i+1];
            j++;
        }
        i++;
    }
    for(int i=0;i<j;i++){
        printf("%c",str1[i]);
    }
}
