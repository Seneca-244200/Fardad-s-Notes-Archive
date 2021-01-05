#include <iostream>
using namespace std;
// cout is an object of type ostream
// ostream cout; is in iostream header file.
// cin is an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
int main() {
   int a, b;
   char message[120] = "how are you?";
   cout << "Hello, " << message << " I am Fardad in the " << 244 << " class" << endl;
   // prints Hello, returns cout
   cout << message << " I am Fardad in the " << 244 << " class" << endl;
   // prints message, rturns cou 
   cout << " I am Fardad in the " << 244 << " class" << endl;
   // and so on....
   int i, j= 2, k=3, l=4, m=5;

   i = j + k + l + m;
/*   i = 5 + l + m;
   i = 9 + m;
   i = 14;
*/
   return 0;
}