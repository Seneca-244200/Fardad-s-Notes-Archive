#include <iostream>
#include "Array.h"
using namespace std;
using namespace seneca;
template <typename type>
void ShowArray(const Array<type>& d) {
    for (int i = 0; i < d.size(); i++) {
        cout << d[i] << endl;
    }
}

int main() {
    Array<int> d(5);
    for (int i = 0; i < 7; i++) {
        d[i] = i + 10;
    }
    ShowArray(d);
    cout << endl;

    cout << d << endl;

    for (int i = 0; i < 10; i++) {
        cout << d[i] << " ";
    }
    cout << endl;


    return 0;
}