#include<stdio.h>

int main(){
    FILE *st;
    st=fopen("student.txt","w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your cgpa: ");
    scanf("%f",&cgpa);

    fprintf(st,"%s\t",name);
    fprintf(st,"%d\t",age);
    fprintf(st,"%f\t",cgpa);

    fclose(st);
    return 0;
}