#include <bits/stdc++.h>
using namespace std;

class Planet {
private:
    string name;
    double distance_from_sun;
    double gravity_relative_to_Earth;

public:
    Planet() {
        name = "Unknown";
        distance_from_sun = 0.0;
        gravity_relative_to_Earth = 0.0;
    }

    Planet(string n, double d, double g) {
        name = n;
        distance_from_sun = d;
        gravity_relative_to_Earth = g;
    }

    void display() {
        cout << "Planet Name: " << name << endl;
        cout << "Distance from Sun: " << distance_from_sun << " million km" << endl;
        cout << "Gravity relative to Earth: " << gravity_relative_to_Earth << endl;
        cout << "-----------------------------" << endl;
    }
};

int main() {
    Planet earth("Earth", 149.6, 1.0);
    Planet mars("Mars", 227.9, 0.38);

    earth.display();
    mars.display();

    return 0;
}
