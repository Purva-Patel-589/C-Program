#include <bits/stdc++.h>
using namespace std;

class Student {
private:
    string universityName;
    string departmentName;
    string firstName;
    string lastName;
    int classYear;
    string major;

public:    
    Student() {
        universityName = "SRM University";
        departmentName = "Computer Science Department";
        firstName = "";
        lastName = "";
        classYear = 0;
        major = "";
    }

    Student(string uName, string dName, string fName, string lName, int year, string maj) {
        universityName = uName;
        departmentName = dName;
        firstName = fName;
        lastName = lName;
        classYear = year;
        major = maj;
    }

    void displayDetails() {
        cout << "------------------------------" << endl;
        cout << "University: " << universityName << endl;
        cout << "Department: " << departmentName << endl;
        cout << "First Name: " << firstName << endl;
        cout << "Last Name: " << lastName << endl;
        cout << "Class Year: " << classYear << endl;
        cout << "Major: " << major << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    Student s1("SRM University", "Computer Science Department", "Purva", "Patel", 2025, "Cyber Security");

    Student s2;

    cout << "Student 1 (Overloaded Constructor):" << endl;
    s1.displayDetails();

    cout << "Student 2 (Default Constructor):" << endl;
    s2.displayDetails();

    return 0;
}