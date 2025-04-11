#include <iostream>
#include <string>
using namespace std;

class Bank {
private:
    string holdername;
    string accountNumber;
    double balance;

public:
    // Constructor
    Bank(string name, string accNumber, double initialBalance) {
        holdername = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Display account details
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder Name: " << holdername << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount <= 0) {
            cout << "Deposit amount must be greater than zero!" << endl;
        } else {
            balance += amount;
            cout << "Successfully deposited $" << amount << "!" << endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount <= 0) {
            cout << "Withdrawal amount must be greater than zero!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrawn $" << amount << "!" << endl;
        }
    }

    // Check balance
    double checkBalance() {
        return balance;
    }
};

int main() {
    string name, accNumber;
    double initialBalance;

    cout << "Welcome to the Banking System" << endl;

    // Input account details
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your account number: ";
    cin >> accNumber;
    cout << "Enter the initial balance: ";
    cin >> initialBalance;

    // Create a Bank object
    Bank myAccount(name, accNumber, initialBalance);

    int choice;
    do {
        // Display menu
        cout << "\n--- Banking Menu ---" << endl;
        cout << "1. Display Account Details" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Perform operations based on user choice
        switch (choice) {
            case 1:
                myAccount.display();
                break;
            case 2: {
                double depositAmount;
                cout << "Enter amount to deposit: ";
                cin >> depositAmount;
                myAccount.deposit(depositAmount);
                break;
            }
            case 3: {
                double withdrawAmount;
                cout << "Enter the amount to withdraw: ";
                cin >> withdrawAmount;
                myAccount.withdraw(withdrawAmount);
                break;
            }
            case 4: {
                cout << "Your current balance: $" << myAccount.checkBalance() << endl;
                break;
            }
            case 5:
                cout << "Thank you for using the Banking System. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
                break;
        }
    } while (choice != 5); // Corrected semicolon placement

    return 0;
}
