#include <iostream>
using namespace std;
int main() {
   int v{};
   char str[21]{};
   char ch{};
   double dv{};
   /*
   Extraction operator (>>) with cin always leaves at least one '\n' in keybaord buffer.
   cin and operator>> for all overloads skips leading whitespace
   */
   cout << "Int: ";
   cin >> v;
   cout << v << endl;
   cout << "Double: ";
   cin >> dv;
   cout << dv << endl;
   cout << "cstring: ";
   cin >> str;  // white space chars are delimimters.
   cout << str << endl;
   cout << "char: ";
   cin >> ch;
   cout << ch << endl;

   return 0;
}
