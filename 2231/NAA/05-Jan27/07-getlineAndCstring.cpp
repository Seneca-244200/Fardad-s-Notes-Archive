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
   cin.getline(str, 21, ','); // will eat the delim. and will fail on max
   cout << "*" << str << "*" << endl;
   if (cin) {
      cout << "char after delimiter is: ";
      ch = cin.get();
      cout << "*" << ch << "*" << endl;
   }
   else {
      cout << "too long!, must flush keybaord" << endl;
   }
   return 0;
}
