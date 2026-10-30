#include <iostream>
using namespace std;

int main() {
    double bal = 5000.00;
    double deposit, withdraw;
    string choice = "";

    cout << "Welcome to ATM" << endl;

    while (choice != "4") {
        cout << "\n===== ATM MENU ====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Monet" << endl;
        cout << "4. Exit Menu" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == "1") {
            cout << "Your current balance is: " << bal;
        } else if (choice == "2") {
            cout << "Enter Deposte amount: ";
            cin >> deposit;

            if (deposit > 0) {

                cout << "Money successfully deposited!" << endl;
                bal = bal + deposit;
                cout << "Updated Balance: " << bal << endl;
                
            } else {
                 cout << "Invalid deposit amount!" << endl;
            }

        } else if (choice == "3") {

            cout << "Enter Withdrawl amount: ";
            cin >> withdraw;

            if (withdraw <= 0) {
                cout << "Invalid withdrawal amount!" << endl;
            }
            else if (withdraw > bal) {
                cout << "Insufficient balance!" << endl;
            }
            else {

                bal = bal - withdraw;

                cout << "Money successfully withdrawn!" << endl;
                cout << "Updated Balance: " << bal << endl;
            }
        } 

        else if (choice == "4") {

            cout << "Thank you for using ATM!" << endl;
        }
        
        else {

            cout << "Invalid choice! Please try again." << endl;
        }
    }
    return 0;
}