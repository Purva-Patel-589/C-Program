#include<bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    float length, breadth;  

public:
    void readValues() {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void Area() {
        float area = length * breadth;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main() {
    Rectangle r;

    r.readValues(); 
    r.Area();   

    return 0;
}