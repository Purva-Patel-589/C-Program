#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c=0;
    cin >> a >> b;
    int mx,mn;
    mx=max(a,b);
    mn=min(a,b);
    while(mx!=mn){
        c++;
        int d=mx-mn;
        mx=max(mn,d);
        mn=min(mn,d);
    }
    cout<<c;
    return 0;
}