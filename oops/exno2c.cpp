#include <bits/stdc++.h>
using namespace std;

class CustomerAccount {
private:
    string bankName;
    string firstName;
    string lastName;
    string panNumber;
    long long accountNumber;
    const double balance;

public:
    CustomerAccount() : balance(0.0) {
        bankName = "State Bank of India";  
        firstName = "";
        lastName = "";
        panNumber = "";
        accountNumber = 0;
    }

    CustomerAccount(string bName, string fName, string lName, string pan, long long accNo, double bal)
        : bankName(bName), firstName(fName), lastName(lName), panNumber(pan), accountNumber(accNo), balance(bal) {}

    void displayDetails() const {
        cout << "----- Customer Account Details -----\n";
        cout << "Bank Name      : " << bankName << endl;
        cout << "First Name     : " << firstName << endl;
        cout << "Last Name      : " << lastName << endl;
        cout << "PAN Number     : " << panNumber << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
        cout << "-----------------------------------\n";
    }
};

int main() {
    CustomerAccount myAccount("HDFC Bank", "Purva", "Patel", "ABCDE1234F", 9876543210, 50000.75);
    CustomerAccount familyAccount("ICICI Bank", "Ramesh", "Patel", "XYZAB6789K", 1234567890, 75000.50);

    myAccount.displayDetails();
    familyAccount.displayDetails();

    return 0;
}