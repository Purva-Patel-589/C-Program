#include<stdio.h>

int main(){
    char l;
    int u_case,l_case;
    printf("Enter the letter(a to z):");
    scanf("%c",&l);
    u_case=(l=='A'||l=='E'||l=='I'||l=='O'||l=='U');
    l_case=(l=='a'||l=='e'||l=='i'||l=='o'||l=='u');
    if(u_case||l_case){
        printf("Vowel.");
    }
    else{
        printf("Consonent.");
    }
    return 0;
}