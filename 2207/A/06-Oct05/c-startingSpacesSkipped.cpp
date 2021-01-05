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
   cout << a << "|" << b << "|" << message << "|" << endl;
   return 0;
}