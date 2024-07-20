#include <iostream>
#include <ctime>
using namespace std;

int main () {

    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    cout<<"*************** Number Guessing Game ***************"<<endl;
    do {
        cout<<"Enter a number between (1-100): ";
        cin>>guess;
        tries++;

        if (guess < num) {
            cout<<"Too low"<<endl;
        }

        else if (guess > num) {
            cout<<"Too high"<<endl;
        }

        else {
            cout<<"Correct!"<<endl<<"No. of tries: "<<tries<<endl;
        }
    } while (guess != num);
    cout<<"****************************************************"<<endl;

    return 0;
}