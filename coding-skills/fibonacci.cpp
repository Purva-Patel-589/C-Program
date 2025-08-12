#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, i;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci sequence:\n";
    for (i = 0; i < n; i++) {
        cout<<fibonacci(i);
    }
    return 0;
}