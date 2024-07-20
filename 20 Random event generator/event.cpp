#include <iostream>
#include <ctime>
using namespace std;

int main () {

    srand(time(0));

    int num = (rand() % 5) + 1;

    switch (num) {
        case 1:
            cout<<"You won car!";
            break;
        case 2:
            cout<<"You won sticker!";
            break;
        case 3:
            cout<<"You won bike!";
            break;
        case 4:
            cout<<"You won PS5!";
            break;
        case 5:
            cout<<"You won game!";
            break;
    }

    return 0;
}