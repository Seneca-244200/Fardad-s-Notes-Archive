#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   char ch;
   char str[50];
   ofstream myname("thename.txt");
   myname << "Fardad" << endl;
   myname.width(40);
   myname.fill('.');
   myname.setf(ios::right);
   myname << "Soleimanloo" << endl;
   myname.close();
   ifstream name("thename.txt");
   name >> ch;
   cout << ch << endl;
   name.getline(str, 50);
   if (name) {
      cout << str << endl;
   }
   name.ignore(1000, 'S');
   name.getline(str, 50);
   if (name) {
      cout << str << endl;
   }
   return 0;
}