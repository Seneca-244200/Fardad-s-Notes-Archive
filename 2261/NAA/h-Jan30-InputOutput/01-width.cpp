#include <iostream>
using namespace std;
int main() {
   int ival = 123;
   double dval = 123.456789;
   char str[] = "John Doe";
   cout << '*' << ival << '*' << endl;
   cout << '*' << dval << '*' << endl;
   cout << '*' << str << '*' << endl;
   cout << '*';
   cout.width(20); // only effects the next output
   cout << ival << '*' << endl;
   cout << '*';
   cout.width(30); // only effects the next output
   cout << dval << '*' << endl;
   cout << '*';
   cout.width(25); // only effects the next output
   cout << str << '*' << endl;
   cout << '*';
   cout.width(5); // if width is less than the width of data, the width of data is used
   cout << str << '*' << endl;

   return 0;
}