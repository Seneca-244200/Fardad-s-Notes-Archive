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
   double b=9876.432;
   char message[123]="Initial value";
   cout << "Enter an int and a double number: ";
   cin >> a;
   if (cin.fail()) {
      cout << "Could not read the int" << endl;
      cin.clear();
      cin.ignore(2000,' ');
      
      //cin.ignore(' '); --> cin.ignore(32), this will only ingore 32 characters (quiz!!!  )
      // cin.ignore(15); // use it if you need, but you might not need it in OOP244
   }
   cin >> b;
   if (cin.fail()) {
      cout << "Could not read the double" << endl;
   }
   cout << a << "|" << b << "|" << endl;

   return 0;
}