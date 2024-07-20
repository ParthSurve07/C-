#include <iostream>
using namespace std;

int main () {
    
    double temp;
    char unit;

    cout<<"****************** Temperature conversion ******************"<<endl;
    
    cout<<"F = Fehrenheit"<<endl;
    cout<<"C = Celcius"<<endl;
    cout<<"What unit would you like to convert to: ";
    cin>>unit;

    if (unit == 'f' || unit == 'F') {
        cout<<"Enter the temperature in celcius: ";
        cin>>temp;

        temp = (1.8 * temp) + 32;
        cout<<"Temperature is "<<temp<<"F"<<endl;
    } 

    else if (unit == 'c' || unit == 'C') {
        cout<<"Enter the temperature in celcius: ";
        cin>>temp;

        temp = (temp - 32) / 1.8;
        cout<<"Temperature is "<<temp<<"C"<<endl;
    }

    else {
        cout<<"Please enter only C or F"<<endl;
    }
    
    cout<<"************************************************************"<<endl;


    return 0;
}