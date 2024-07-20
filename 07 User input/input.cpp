#include <iostream>
using namespace std;

int main () {

    string name;
    cout<<"What's your full name ? ";
    getline(cin>>ws, name);

    cout<<"Your name is "<<name;

    return 0;
}