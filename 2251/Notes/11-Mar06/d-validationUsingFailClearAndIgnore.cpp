#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int val, val2;

   cout << "Enter a number\n> ";
   cin >> val;
   while (cin.fail()) {
      cin.clear();
      cin.ignore(100000, '\n');
      cout << "invalid ingeter, try again!\n> ";
      cin >> val;
   }
   cout << "You entered " << val << endl;
   return 0;
}