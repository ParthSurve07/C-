#include <iostream>
using namespace std;

int main () {

    string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);

    string temp;
    for (int i = 0; i < size; i++) {
        cout<<"Enter the food you like or 'e' to exit: ";
        getline(cin, temp);

        if (temp == "e") {
            break;
        }
        else {
            foods[i] = temp;
        }
    }

    for (int i = 0; !foods[i].empty(); i++) {
        cout<<foods[i]<<endl;
    }

    return 0;
}