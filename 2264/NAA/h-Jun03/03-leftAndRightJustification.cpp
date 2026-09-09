// no IO manipulators are alloed to be used in your work in OOP244
// if you don't know what a manipuloator is, then you are ok! :)
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
   cout.setf(ios::left); /*00001*/
   cout << '*';
   cout.width(20);// only affects the next output
   cout << ival << '*' << endl;
   cout.unsetf(ios::left); /*00000*/


   cout.setf(ios::right); /*00010*/
   cout.fill(' ');
   cout << '*';
   cout.width(30); // only affects the next output
   cout << dval << '*' << endl;
   cout.unsetf(ios::right); /*00000*/

   cout.setf(ios::left);  /*00001*/
   cout << '*';
   cout.width(25); // only affects the next output
   cout << str << '*' << endl;
   cout.unsetf(ios::left);  /*00000*/

   cout << '*';
   cout.width(5); // if width is less than the width of data, the width of data is used
   cout << str << '*' << endl;

   return 0;
}