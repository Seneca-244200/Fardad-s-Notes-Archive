#include <iostream>
#include "Derived.h"
using namespace std;
int main() {
    Derived a("A", 3000), b, c(a);
    cout << a << endl;
    cout << b << endl;
    b = c;
    cout << b << endl;
    return 0;
}