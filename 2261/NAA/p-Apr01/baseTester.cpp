#include <iostream>
#include "Base.h"
using namespace std;
int main() {
    Base a(3000), b, c(a);
    cout << a << endl;
    cout << b << endl;
    b = 123;
    cout << b << endl;
    b = c;
    cout << b << endl;
    return 0;
}