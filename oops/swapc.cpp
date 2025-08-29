#include<bits/stdc++.h>
using namespace std;

void swapByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    swapByAddress(&x, &y);
    cout << "x=" << x <<", y=" << y <<endl;
    return 0;
}