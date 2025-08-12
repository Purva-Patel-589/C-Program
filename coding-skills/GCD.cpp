#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> primeFactors(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    vector<int> factorsA = primeFactors(a);
    vector<int> factorsB = primeFactors(b);

    int gcd = 1;
    for (int i = 0, j = 0; i < factorsA.size() && j < factorsB.size();) {
        if (factorsA[i] == factorsB[j]) {
            gcd *= factorsA[i];
            i++;
            j++;
        }
        else if (factorsA[i] < factorsB[j]) {
            i++;
        }
        else {
            j++;
        }
    }

    cout << "GCD = " << gcd << endl;
    return 0;
}