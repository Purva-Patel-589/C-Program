#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter your no.";
    cin>>n;
    int sum=0;
    if(n%9==0){
        sum=9;
    }else{
        sum=n%9;
    }
    cout<<sum;
    return 0;
}
