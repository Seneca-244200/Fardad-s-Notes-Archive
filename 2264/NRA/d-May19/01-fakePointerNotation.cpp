#include <iostream>
#include "pointer.h"



using namespace std;
int main() {
    cout << "OOP244 NRA - May 19" << endl;
    int var = 2345;
    int Pointer ptr = AddressOf var;
    cout << var << endl;
    cout << TargetOf ptr << endl;
    cout << ptr << endl;

    return 0;
}