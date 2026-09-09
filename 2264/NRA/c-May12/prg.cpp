
#include <iostream>
using namespace std;

int& crazy(int& var) {
    var++;
    return var;
}

int main() {
    int I{ 20 };

    crazy(I)+= 299; // crazy(int& var = I);

    cout << I << endl;

    return 0;
}