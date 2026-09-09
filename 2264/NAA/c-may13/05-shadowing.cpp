#include <iostream>
using namespace std;

int main() {
    int value = 100;           // outer scope

    cout << "Before inner block: value = " << value << endl;

    {
        int value = 200;       // shadows the outer 'value'
        cout << "Inside block:   value = " << value << endl;
        value += 5000;
    }

    cout << "After inner block:  value = " << value << endl;  // back to 100
    return 0;
}