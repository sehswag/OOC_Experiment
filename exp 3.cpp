#include <iostream>
#include <string>
using namespace std;

class SavingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;

public:
    
    SavingAccount(string name, int accNumber, double initialBalance, double rate)
        : accountHolderName(name), accountNumber(accNumber),
          balance(initialBalance), interestRate(rate) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ?" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: ?" << amount << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void applyInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest Applied: ?" << interest << endl;
    }

    void display() const {
        cout << "\n[Savings Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ?" << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CheckingAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;
    double transactionFee;

public:
    
    CheckingAccount(string name, int accNumber, double initialBalance, double fee)
        : accountHolderName(name), accountNumber(accNumber),
          balance(initialBalance), transactionFee(fee) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: ?" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && (amount + transactionFee) <= balance) {
            balance -= (amount + transactionFee);
            cout << "Withdrawn: ?" << amount 
                 << " | Transaction Fee: ?" << transactionFee << endl;
        } else {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    void display() const {
        cout << "\n[Checking Account]" << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ?" << balance << endl;
        cout << "Transaction Fee: ?" << transactionFee << endl;
    }
};

int main() {
     cout << "Name: Shubhada Tarlekar\n";
    cout << "Div: B\n";
    cout << "Roll no.: 95\n";

    SavingAccount saving("Alice", 1001, 5000.0, 3.0);
    CheckingAccount checking("Bob", 1002, 3000.0, 20.0);

    cout << "\n--- Operations on Savings Account ---" << endl;
    saving.deposit(1000);
    saving.withdraw(2000);
    saving.applyInterest();
    saving.display();

    cout << "\n--- Operations on Checking Account ---" << endl;
    checking.deposit(1500);
    checking.withdraw(1000);
    checking.display();

    return 0;
}

