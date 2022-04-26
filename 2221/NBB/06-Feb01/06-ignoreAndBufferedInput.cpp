#include <iostream>
#include "Mark.h"
#include "Utils.h"
using namespace std;
using namespace sdds;

int main() {
   char str[51];
   cout << "str > ";
   cin.ignore();
   cin >> str;
   cout << "str: " << str << endl;
   cout << "str > ";
   cin.ignore(3);
   cin >> str;
   cout << "str: " << str << endl;
   cout << "str > ";
   //cin.ignore('\n');
   cin.ignore(10);// what is really called when you pass '\n' as
                  // an integer.
   cin >> str;
   cout << "str: " << str << endl;
   return 0;
}

