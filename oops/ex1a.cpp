#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1, n2;
    char o;
    int result;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter an operator (+, -, *, /, %): ";
    cin >> o;
    cout << "Enter second number: ";
    cin >> n2;
    switch(o) {
        case '+':
            result = n1 + n2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = n1 - n2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = n1 * n2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (n2 != 0) {
                result = n1 / n2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        case '%':
            if (n2 != 0) {
                result = n1 % n2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid oerator!" << endl;
    }
    return 0;
}