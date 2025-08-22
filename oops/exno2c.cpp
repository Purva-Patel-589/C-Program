#include <bits/stdc++.h>
using namespace std;

class CustomerAccount {
private:
    string bankName;
    string firstName;
    string lastName;
    string panNumber;
    string accountNumber;
    double balance;   

public:
    CustomerAccount() {
        bankName = "State Bank of India"; 
        firstName = ""; 
        lastName = ""; 
        panNumber = ""; 
        accountNumber = ""; 
        balance = 0.0;
    }

    CustomerAccount(string bName, string fName, string lName,string pan, string accNo, double bal){
        bankName = bName;
        firstName = fName;
        lastName = lName; 
        panNumber = pan;
        accountNumber = accNo;
        balance = bal;
    }

    void displayDetails() {
        cout << "---------------------------------\n";
        cout << "Bank Name      : " << bankName << endl;
        cout << "Account Holder : " << firstName << " " << lastName << endl;
        cout << "PAN Number     : " << panNumber << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : $" << balance << endl;
        cout << "---------------------------------\n";
    }
};

int main() {
    CustomerAccount myAccount("HDFC Bank", "Purva", "Patel", "ABCDE1234F", "1234567890", 50000.75); 
                              

    CustomerAccount familyAccount("ICICI Bank", "Rahul", "Patel", "XYZAB6789K", "9876543210", 75000.50);
                                  

    cout << "My Account Details:\n";
    myAccount.displayDetails();

    cout << "\nFamily Member Account Details:\n";
    familyAccount.displayDetails();

    return 0;
}