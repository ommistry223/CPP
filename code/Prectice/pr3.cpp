#include <iostream>
#include <map>

using namespace std;

class BankAccount {
private:
    static int totalAccounts;
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string name, double initialBalance) {
        accountNumber = ++totalAccounts;
        accountHolder = name;
        balance = initialBalance;
    }

    // Get account number
    int getAccountNumber() const {
        return accountNumber;
    }

    // Display account details
    void displayAccount() const {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "$" << amount << " deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw money
    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "$" << amount << " withdrawn successfully." << endl;
            return true;
        } else {
            cout << "Insufficient funds or invalid amount." << endl;
            return false;
        }
    }

    // Transfer money to another account
    bool transfer(BankAccount &recipient, double amount) {
        if (withdraw(amount)) {
            recipient.deposit(amount);
            cout << "Transfer successful to account " << recipient.accountNumber << endl;
            return true;
        }
        return false;
    }

    // Get total number of accounts
    static int getTotalAccounts() {
        return totalAccounts;
    }
};

// Initialize static variable
int BankAccount::totalAccounts = 0;

int main() {
    map<int, BankAccount> accounts;

    // Creating accounts
    BankAccount acc1("Alice Johnson", 1000.0);
    BankAccount acc2("Bob Smith", 500.0);

    accounts[acc1.getAccountNumber()] = acc1;
    accounts[acc2.getAccountNumber()] = acc2;

    // Display accounts
    cout << "\nAccount Details:" << endl;
    for (const auto &pair : accounts) {
        pair.second.displayAccount();
        cout << "-----------------------" << endl;
    }

    // Transactions
    accounts[1].deposit(200.0);
    accounts[2].withdraw(100.0);
    accounts[1].transfer(accounts[2], 300.0);

    // Display updated balances
    cout << "\nUpdated Account Details:" << endl;
    for (const auto &pair : accounts) {
        pair.second.displayAccount();
        cout << "-----------------------" << endl;
    }

    // Display total ac
