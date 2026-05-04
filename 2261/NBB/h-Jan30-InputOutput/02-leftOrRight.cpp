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
   cout.width(20); // only affects the next output
   cout.setf(ios::left);// affects all outputs from this point
   cout << ival << '*' << endl;
   cout.unsetf(ios::left);// affects all outputs from this point

   cout << '*';
   cout.setf(ios::right);
   cout.width(30); // only affects the next output
   cout << dval << '*' << endl;
   cout.unsetf(ios::right);

   cout << '*';
   cout.setf(ios::left);
   cout.width(25); // only affects the next output
   cout << str << '*' << endl;
   cout.unsetf(ios::left);

   cout << '*';
   cout.width(5); // if width is less than the width of data, the width of data is used
   cout << str << '*' << endl;

   return 0;
}