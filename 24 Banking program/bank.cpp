#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double withdraw(double balance);
double deposit();

int main () {

    double balance;
    int choice = 0;

    cout<<"***************** BANKING AMOUNT *****************"<<endl;
    do {
        cout<<"1: Show balance"<<endl;
        cout<<"2: Withdraw money"<<endl;
        cout<<"3: Deposit money"<<endl;
        cout<<"4: Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 3:
                balance =+ deposit();
                showBalance(balance);
                break;
            case 4:
                cout<<"Thanks for visiting!"<<endl;
                break;
            default:
                cout<<"Please enter a valid number";
                break;
        }
    } while (choice != 4);
    cout<<"**************************************************"<<endl;

    return 0;
}

void showBalance (double balance) {
    cout<<"Your balance is: $"<<setprecision(2)<<fixed<<balance<<endl;
}

double withdraw (double balance) {
    double amount;

    cout<<"Enter amount to be withdrawn: ";
    cin>>amount;

    if (amount > balance) {
        cout<<"Insufficient balance"<<endl;
    }

    else if (amount > 0) {
        return amount;
    }

    else {
        cout<<"Please enter a valid amount"<<endl;
    }
}

double deposit () {
    double amount = 0;

    cout<<"Enter amount to be deposited: ";
    cin>>amount;

    if (amount > 0) {
        return amount;
    }

    else {
        cout<<"Please enter a valid amount"<<endl;
    }
}