#include <iostream>
using namespace std;
int main() {
   cout << "OOP244NAA - Jun03" << endl;
   int ival = 123;
   double dval = 123.456789;
   char str[] = "John Doe";

   cout.fill('_');// affects all the output on cout from this point forward

   cout << '*' << ival << '*' << endl;
   cout << '*' << dval << '*' << endl;
   cout << '*' << str << '*' << endl;
   
   cout << '*';
   cout.width(20);// only affects the next output
   cout << ival << '*' << endl;

   cout.fill(' ');
   cout << '*';
   cout.width(30); // only affects the next output
   cout << dval << '*' << endl;

   cout << '*';
   cout.width(25); // only affects the next output
   cout << str << '*' << endl;

   cout << '*';
   cout.width(5); // if width is less than the width of data, the width of data is used
   cout << str << '*' << endl;
   return 0;
}