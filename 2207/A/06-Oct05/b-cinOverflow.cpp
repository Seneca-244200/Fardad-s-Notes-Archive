#include <iostream>
using namespace std;
// cout an object of type ostream
// something like: ostream cout; is in iostream header file.
// cin an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
int main() {
   int a, b;
   char message[123] = "How are you?";
   char nextThing[3];
   cout << "Hello " << message << " I am Fardad and I am in " << 244 << " class" << endl;
   cin >> a >> b >> message;
   cout << a << ", " << b << ", " << message << endl;
   cin >> nextThing;
   cout << "Next Thing: " << nextThing << endl; // an overflow and a crash
   return 0;
}