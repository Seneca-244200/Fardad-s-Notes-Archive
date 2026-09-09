
#include <iostream>
using namespace std;

int main() {
    int val{ 100 };
    int& ref = val;

    cout << ref << endl;
    ref += 10;
    cout << val << endl;

    return 0;
}