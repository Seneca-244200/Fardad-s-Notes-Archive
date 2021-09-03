
#include <iostream>
#include "Name.h"
#include "utils.h"
using namespace std;
using namespace sdds;


int main() {
   char str[] = "abc";
   cout.setf(ios::left);
   cout.fill('~');
   cout << "*";
   cout << str;
   cout << "*" << endl;
   cout << "*";
   cout.width(10);
   cout << str;
   cout << "*" << endl;
   cout << "*";
   cout << str;
   cout << "*" << endl;
   cout << "*";
   cout << str;
   cout.width(10);
   cout << "*" << endl;
   cout.fill(' ');
   cout << "*";
   cout.width(10);
   cout << str;
   cout << "*" << endl;    
   cout.unsetf(ios::left);
   cout.setf(ios::right);
   cout << "*";
   cout.width(10);
   cout << str;
   cout << "*" << endl;
   cout.unsetf(ios::right);
   cout.setf(ios::left);
   cout << "*";
   cout.width(10);
   cout << str;
   cout << "*" << endl;
   cout.unsetf(ios::right);
   return 0;
}