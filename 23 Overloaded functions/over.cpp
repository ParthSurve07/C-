#include <iostream>
using namespace std;

void bake();
void bake(string topping1);
void bake(string topping1, string topping2);

int main () {

    bake("mushroom", "pepperoni");

    return 0;
}

void bake() {
    cout<<"Here is your pizza!"<<endl;
}

void bake(string topping1) {
    cout<<"Here is your "<<topping1<<" pizza!"<<endl;
}

void bake(string topping1, string topping2) {
    cout<<"Here is your "<<topping1<<" and "<<topping2<<" pizza!"<<endl;
}