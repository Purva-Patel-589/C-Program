#include<stdio.h>

int main(){
    int x=0,y=1,next=0,n;
    for(int i=0;i<=n;i++){
        if(i==0){
            printf("%d\n",x);
        }else if(i==1){
            printf("%d\n",y);
        }else{
            x=y;
            y=next;
            next = x+y;
            printf("%d",next);
        }
    }
}