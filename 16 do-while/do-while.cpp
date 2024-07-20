#include <iostream>
using namespace std;

int main () {

    int n;

    do {
        cout<<"Enter a positive number: ";
        cin>>n;
    } while (n < 0);

    cout<<n<<endl;

    return 0;
}