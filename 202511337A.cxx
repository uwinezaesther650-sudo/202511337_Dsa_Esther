#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int balance = 0;
int transCount = 0;
string history[100];

string intToStr(int n) {
    stringstream ss;
    ss << n;
    return ss.str();
}

void deposit() {
    int amount;
    //ask use to enter deposit amount
    cout << "Enter  amount: ";
    cin >> amount;
    //balance formula
    balance =balance+ amount;
    history[transCount++] = "Deposited: " + intToStr(amount) + " FRW";
    //display
    cout << "Successed! New Balance: " << balance << " FRW" << endl;
}

void withdraw() {
    int amount;
    //ask user to enter withdraw amount
    cout << "Enter  withdraw amount: ";
    cin >> amount;
    if (amount > balance) {
    //output
        cout << "Insufficient funds." << endl;
    } else {
    //new balance formula
        balance =balance-amount;
        history[transCount++] = "Withdrawn: " + intToStr(amount) + " FRW";
        cout << "Successed! Remaining Balance: " << balance << " FRW" << endl;
    }
}

void showHistory() {
    if (transCount == 0) {
        cout << "No transactions found." << endl;
    } else {
        for (int i = 0; i < transCount; i++) {
            cout << i + 1 << ". " << history[i] << endl;
        }
    }
}

void menu() {
    int choice;
    do {
        cout << "\n===== BK ATM MAIN MENU =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Transaction History" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Balance: " << balance << " FRW" << endl; break;
            case 2: deposit(); break;
            case 3: withdraw(); break;
            case 4: showHistory(); break;
            case 5: cout << "Thank you for using BK ATM!" << endl; break;
            default: cout << "Invalid choice." << endl;
        }
    } while (choice != 5);
}

int main() {
//declaring pin
    int pin;
    int attempts = 3;
    int defaultPin = 12345;
//output
    cout << "===== BK ATM SYSTEM =====" << endl;

    do {
        cout << "Enter PIN: ";
        cin >> pin;
        attempts--;

        if (pin == defaultPin) {
            cout << "Login Successful! Welcome." << endl;
            menu();
            return 0;
        } else {
            cout << "Wrong PIN. Attempts left: " << attempts << endl;
        }
    } while (attempts > 0);

    cout << "ATM BLOCKED." << endl;
    return 0;
}