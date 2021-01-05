#include <iostream>
//using namespace std;
// cout an object of type ostream
// cin an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
using namespace std;
int main() {
   int a;
   double b;
   char message[128] = "How are you?";
   char nextThing[3];
   cout << "Enter an int, double and a string: " << endl << "> ";
   cin >> a >> b >> message;
   cout << a << "|" << b << "|" << message << endl;
   cin >> nextThing;
   cout << "the next thing is: " << nextThing << endl;
   return 0;
}