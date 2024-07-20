#include <iostream>
using namespace std;

int main () {

    const int SIZE = 99;
    string games[SIZE];

    fill(games, games + (SIZE / 3), "football");
    fill(games + (SIZE / 3), games + (2 * SIZE / 3), "cricket");
    fill(games + (2 * SIZE / 3), games + SIZE, "basketball");

    for (string game : games) {
        cout<<game<<endl;
    }

    return 0;
}