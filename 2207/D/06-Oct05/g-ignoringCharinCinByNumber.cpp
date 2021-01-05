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
   cout << "Enter an int, double and a string comma seperated" << endl << "> ";
   cin >> a;
   cin.ignore();
   cin >> b;
   cin.ignore(3);
   cin >> message;
   cout << a << "|" << b << "|" << message << "|" << endl;

   return 0;
}