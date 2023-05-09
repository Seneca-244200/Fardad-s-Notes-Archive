#include <iostream>
using namespace std;
int main() {
   char str[21]{};
   char ch{};
   /*
   all get functions are to receive cstrings and characters

   */
   cout << "char: ";
   ch = cin.get();
   cout << "*" << ch << "*" << endl;
   cin.ignore(10000, '\n');
   cout << "cstring: ";
   cin.get(str, 21); // will no eat the delim. and will not fail on max
   cout << "*" << str << "*" << endl;
   cout << "char: ";
   ch = cin.get();
   cout << "*" << ch << "*" << endl;
   return 0;
}
