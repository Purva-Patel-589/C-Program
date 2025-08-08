#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,7,6,4,5};
    vector<int> v(8);
    for(int i=0;i>8;i++){
        if(v[i]==0){
        v[arr[i]]=1;
        }
        else
        cout<<v[i];
    }

}