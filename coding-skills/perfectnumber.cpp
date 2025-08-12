#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, sum = 1;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 2; i*i<= n; i++) {
        if (n % i == 0 && i!=n/i) {
            sum += (i+n/i);
        }
    }
    if (sum == n && n != 0)
        cout << n << " is a Perfect Number" << endl;
    else
        cout << n << " is NOT a Perfect Number" << endl;
    return 0;
}