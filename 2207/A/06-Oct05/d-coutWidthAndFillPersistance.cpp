#include <iostream>
using namespace std;
// cout an object of type ostream
// something like: ostream cout; is in iostream header file.
// cin an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
int main() {
   int a;
   double b;
   char message[123];
   cin >> a >> b >> message;
   cout.width(10);
   cout << a << "|" << b << "|" << message << "|" << endl;

   cout.width(10);
   cout << a << "|";
   cout.width(5);
   cout << b << "|" << message << "|" << endl;
   cout.fill('*');
   cout.width(10);
   cout << a << "|";
   cout.width(5);
   cout << b << "|" << message << "|" << endl;
   cout.width(10);
   cout.fill('@');
   cout << a << "|";
   cout.fill(' ');
   cout.width(5);
   cout << b << "|" << message << "|" << endl;


   return 0;
}