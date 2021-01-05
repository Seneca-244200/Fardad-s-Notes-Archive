#include <iostream>
using namespace std;
// cout an object of type ostream
// something like: ostream cout; is in iostream header file.
// cin an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
int main() {
   char i = 65;
   int ch = 'B';
   cout << i << endl;
   cout << ch << endl;
   cout << "-------------------------------" << endl;
   cout << int(i) << endl;
   cout << char(ch) << endl;
   return 0;
}