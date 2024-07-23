#include <iostream>
using namespace std;

void printInfo (const string &name, const int &age);

int main () {

    string name = "John";
    int age = 25;

    printInfo(name, age);

    return 0;
}

void printInfo (const string &name, const int &age) {
    cout << name << endl;
    cout << age << endl;
}