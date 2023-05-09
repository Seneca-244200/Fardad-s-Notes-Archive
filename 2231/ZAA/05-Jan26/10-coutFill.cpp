#include <iostream>
using namespace std;
int main() {
   char str[21]= "Freddie";
   char ch = 'A';
   int iv = 1234;
   double dv = 123.123456789;
   cout << str << " " << ch << " " << iv << " " << dv << endl;
   dv = 1.123456789;
   cout << dv << endl;
   cout.setf(ios::left);
   cout << "*";
   cout.width(20);
   cout << iv << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << str << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << ch << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << dv << "*" << endl;
   cout.unsetf(ios::left);


   cout.fill('.');
   cout.setf(ios::right);
   cout << "*";
   cout.width(20);
   cout << iv << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << str << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << ch << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << dv << "*" << endl;
   cout.unsetf(ios::right);
   cout.fill(' ');

   cout.setf(ios::left);
   cout << "*";
   cout.width(20);
   cout << iv << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << str << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << ch << "*" << endl;
   cout << "*";
   cout.width(40);
   cout << dv << "*" << endl;
   cout.unsetf(ios::left);


   return 0;
}
