#include<stdio.h>

int main(){
    FILE *fptr;
    fptr=fopen("text.txt","r");
    char c;
    c=fgetc(fptr);
    while(c!=EOF){
        printf("%c",c);
        c=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}