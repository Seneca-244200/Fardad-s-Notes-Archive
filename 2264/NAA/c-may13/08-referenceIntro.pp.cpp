#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int& r = a;

    cout <<"r: " <<  r << endl;

    r = 234;

    cout << "a: " << a << endl;

    return 0;
}