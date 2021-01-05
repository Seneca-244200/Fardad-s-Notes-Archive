#include <iostream>
using namespace std;
// cout is an object of type ostream
// ostream cout; is in iostream header file.
// cin is an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
int main() {
   int a;
   double b;
   char message[120] = "how are you?";
   char theNextThing[3];
   cout << "Hello, " << message << " I am Fardad in the " << 244 << " class" << endl;
   cout << "Enter an int, double and a string: ";
   cin >> a >> b >> message;
   cout << a << ", " << b << ", " << message << endl;
   cin >> theNextThing;
   cout << theNextThing;
   return 0;
}