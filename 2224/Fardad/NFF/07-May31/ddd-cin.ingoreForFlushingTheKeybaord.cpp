#include <iostream>
using namespace std;
int main() {
   int i{};
   int j{};
   cout << "i: ";
   cin >> i;
   cin.ignore(10000, '\n'); // this expression is used to flush the keyboard
   cout << "j: ";
   cin >> j;
   cout << i << "  " << j << endl;
   return 0;
}