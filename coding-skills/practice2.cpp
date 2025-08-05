#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,r;
    cout<<"Enter your no. and how many times you want to repeat:";
    cin>>n>>r;
    int sum=0;
    if(n%9==0||r%9==0){
        sum=9;
    }else{
        int sum=(n%9)*r;
        if(sum%9==0){
            sum=9;
        }else{
            sum=sum%9;
        }
    }
    cout<<sum;
    return 0;
}