#include <iostream>
using namespace std;

void sort (int num[], int size);

int main () {

    int num[] = {10, 4, 8, 2, 3, 9, 7, 1, 5, 6};
    int size = sizeof(num) / sizeof(num[0]);

    sort(num, size);

    for (int element : num) {
        cout<<element<<" ";
    }

    return 0;
}

void sort (int num[], int size) {
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (num[j] < num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}