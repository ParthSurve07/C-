#include <iostream>
using namespace std;

void swap(string &x, string &y);

int main () {
    string x = "Kool-aid";
    string y = "Jello";
    string temp;

    cout << "Before swap: " << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    swap(x, y);

    return 0;
}

void swap(string &x, string &y) {
    string temp;
    temp = x;
    x = y;
    y = temp;

    cout << "After swap: " << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
}