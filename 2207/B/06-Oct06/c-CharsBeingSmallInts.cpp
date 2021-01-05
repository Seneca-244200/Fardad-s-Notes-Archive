#include <iostream>
//using namespace std;
// cout an object of type ostream
// cin an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
using namespace std;
int main() {
   char i = 65;
   int ch = 'B';
   cout << i << endl;
   cout << ch << endl;
   cout << int(i) << endl;
   cout << char(ch) << endl;
   i+=3;
   cout << i << endl;


   return 0;
}