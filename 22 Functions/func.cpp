#include <iostream>
using namespace std;

void hbd (string name) {
    cout<<"Happy birthday to you!"<<endl;
    cout<<"Happy birthday to you!"<<endl;
    cout<<"Happy birthday Dear "<<name<<"!"<<endl;
    cout<<"Happy birthday to you!"<<endl;
}

int main () {

    string name;
    cout<<"Enter a name: ";
    getline(cin, name);

    hbd(name);

    return 0;
}