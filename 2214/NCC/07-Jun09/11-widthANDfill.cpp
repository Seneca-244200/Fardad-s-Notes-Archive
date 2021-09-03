
#include <iostream>
#include "Name.h"
#include "utils.h"
using namespace std;
using namespace sdds;


int main() {
   char str[] = "abc";
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

   return 0;
}