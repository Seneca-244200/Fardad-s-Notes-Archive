// how compiler works:
// g++ 1.cpp 2.cpp 3.cpp main.cpp -o myprg

#include <iostream>
using namespace std;
int main() {
    char name[51];
    cout << "OOP244 NRA - May " << 5 <<  endl;
    cout << "What is your name?\n> ";
    cin >> name;
    cout << "Hello " << name << "!" << endl;
    return 0;
}