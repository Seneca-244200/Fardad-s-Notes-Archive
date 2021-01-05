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
   char message[123];
   cout << "Enter an int, double and a string" << endl << "> ";
   cin >> a >> b >> message;
   cout.width(15);
   cout << a << "|" << b << "|" << message << "|" << endl;
   cout << "------------------------------------------------------------------" << endl;
   cout.width(20);
   cout << a << "|";
   cout.width(15);
   cout << b << "|" << message << "|" << endl;
   cout << "------------------------------------------------------------------" << endl;
   cout.fill('_');
   cout.width(20);
   cout << a << "|";
   cout.width(15);
   cout << b << "|";
   cout.width(20);
   cout.fill(' ');
   cout << message << "|" << endl;
   cout << "------------------------------------------------------------------" << endl;

   return 0;
}