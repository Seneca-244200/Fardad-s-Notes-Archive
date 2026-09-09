
#include <iostream>
using namespace std;

void addOne(int& val) {
    val++;
}
void addOne(int* valPtr) {
    (*valPtr)++;
}

int main() {
    int I{ 20 };
    addOne(I);  // addOne(int& Val = I);

    cout << I << endl;

    addOne(&I);

    cout << I << endl;
    return 0;
}