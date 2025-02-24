#include<iostream>
#include<string>
using namespace std;

class BankAccount 
{
private:
    string accountHolderName;
    string accountNumber;
    double balance;

public:
    void Get_data()
    {
        cout << "Enter the bank account holder name: " << accountHolderName;
        cin >> accountHolderName;
        cout << endl;
        cout << "Enter the bank account number: " << accountNumber;
        cin >> accountNumber;
        cout << endl;
        cout << "Enter the bank account balance: " << balance;
        cin >> balance;
        cout << endl;
        
    }

    void deposit(double amount) 
    {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds. Current balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount." << endl;
        }
    }

    void display_balance() 
    {
        cout << "Account holder: " << accountHolderName << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Current balance: $" << balance << endl;
    }
};



int main()
{

    BankAccount account1, account2;
    cout << "Enter the first bank account details:\n" << endl;
    account1.Get_data();
    cout << "\nEnter the second bank account details:\n" << endl;
    account2.Get_data();


    cout << "\nTesting BankAccount operations:\n" << endl;

    account1.display_balance();
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.withdraw(2000.0);  // This should fail
    account1.display_balance();

    cout << "\n-------------------------\n" << endl;

    account2.display_balance();
    account2.deposit(1000.0);
    account2.withdraw(750.0);
    account2.display_balance();

    return 0;
}