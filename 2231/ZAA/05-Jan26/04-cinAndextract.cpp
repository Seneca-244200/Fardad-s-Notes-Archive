#include <iostream>
using namespace std;
int main() {
   int v{};
   char str[21]{};
   char ch{};
   /*
   The operator>> with cin always leaves at least one '\n' bind in
   keyboard;
   cin >> for all the overloads skips leading white spaces;
   
   */
   cout << "Int: ";
   cin >> v;
   cout << v << endl;
   cout << "cstring: ";
   cin >> str;  // white space chars are delimimters.
   cout << str << endl;
   cout << "char: ";
   cin >> ch;
   cout << ch << endl;

   return 0;
}
