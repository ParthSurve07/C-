#include <iostream>
using namespace std;

int main () {

    for (int i = 0; i < 15; i++) {
        if (i == 13) {
            break;
        }
        // if (i == 13) {
        //     continue;
        // }
        cout<<i<<endl;
    }
    

    return 0;
}