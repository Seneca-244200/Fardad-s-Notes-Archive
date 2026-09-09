#include <iostream>
#include "pointer.h"


using namespace std;
int main() {
    int var = 2345;
    int Pointer ptr = AddressOf var;
    cout << TargetOf ptr << endl;
    TargetOf ptr = 20000;
    cout << var << endl;
    return 0;
}