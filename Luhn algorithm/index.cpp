#include <iostream>
using namespace std;

int getDigit (const int number);
int sumOddDigits (const string cardNumber);
int sumEvenDigits (const string cardNumber);

int main () {

    string cardNumber;
    int result = 0;

    cout<<"Enter a credit card number: ";
    cin>>cardNumber;

    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    return 0;
}

int getDigit (const int number) {

}

int sumOddDigits (const string cardNumber) {

}

int sumEvenDigits (const string cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 2; i >= 0; i -= 2) {
        
    }
}