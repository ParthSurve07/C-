#include <iostream>
using namespace std;

int main () {

    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if (age >= 18) {
        cout<<"You are allowed";
    }

    else if (age < 18) {
        cout<<"You are not allowed";
    }

    else if (age <= 0) {
        cout<<"You haven't been born yet";
    }

    return 0;
}