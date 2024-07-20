#include <iostream>
using namespace std;

int main () {
    double gpa = 2.5;
    char grade = 'F';
    string name = "Parth";
    bool student = true;

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    // cout<<sizeof(grades)<<" bytes"<<endl;

    // Size of an array:
    cout<<sizeof(grades)/sizeof(grades[0])<<endl;

    return 0;
}