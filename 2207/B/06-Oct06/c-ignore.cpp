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
   cout << "Enter an int, double and a string, comma separated" << endl << "> ";
   cin >> a;
   cin.ignore();
   cin >> b;
   cin.ignore(3);
   cin >> message;
   cout << a << "|" << b << "|" << message << endl;

   return 0;
}