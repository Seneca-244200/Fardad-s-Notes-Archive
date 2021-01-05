#include <iostream>
//using namespace std;
// cout an object of type ostream
// cin an object of type istream
// as if I have the following:
// double abc;
// abc is an object of type double
using namespace std;
int main() {
   int a = 12345;
   double b = 123.456;
   char message[128] = "How are you?";
   char nextThing[3];
   cout << "Enter an int: ";
   cin >> a;
   if (cin.fail()) {
      cout << "Bad int!" << endl;
      cin.clear();
      cin.ignore(2000, '\n');
   }
   cout << "Enter a double: ";
   cin >> b;
   cout << a << "   " << b << endl;
   return 0;
}