#include <iostream>
using namespace std;
void addTen(int& val) {
    val += 10;
}

int& crazy(int& val) {
    return val;
}

int main() {
    int a = 10;

    addTen(a); // addTen(int& val = a);

    cout << "a: " << a << endl;

    crazy(a) += 2000; // crazy(int& val = a);

    cout << "a: " << a << endl;

    return 0;
}