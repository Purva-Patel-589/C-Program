#include<bits/stdc++.h>
using namespace std;

int add(int a, int b = 5, int c = 10) {
    return a + b + c;
}

int main() {
    cout << "Calling add(2): " << add(2) << endl;          
    cout << "Calling add(2, 3): " << add(2, 3) << endl;    
    cout << "Calling add(2, 3, 4): " << add(2, 3, 4) << endl; 

    return 0;
}