#include <iostream>
#include <cmath>
using namespace std;

int main () {

    double x = 3;
    double y = 4;
    double z;

    // z = max(x, y);
    // z = min(x, y);

    // z = pow(x, y);
    // z = sqrt(x, y);
    // z = abs(x, y);

    // Round down
    // z = round(x, y);
    // Round up
    // z = ceil(x, y);
    // Always round down
    z = floor(x, y);

    cout<<z;

    return 0;
}