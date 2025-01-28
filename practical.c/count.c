#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int v=0,w=0,s=0;
    printf("Enter your string:-");
    gets(str);
    int c = strlen(str);
    printf("%d\n",c);

    for(int i=0;i<c;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='i'){
            v++;
        }
        if(str[i]==' '){
            w++;
        }
        if(str[i]=='.'){
            s++;
        }
    }
    printf("%d\n",v);

    printf("%d\n",w+1);

    printf("%d\n",s);

    return 0;
}