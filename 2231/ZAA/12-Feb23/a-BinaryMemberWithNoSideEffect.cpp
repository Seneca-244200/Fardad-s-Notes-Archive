#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;
int main() {
   String name = "Homer";
   String lastname = "Simpson";
   String fullname;
   //fullname = name;
   //fullname += " ";
   //fullname += lastname;
   //cout << "name: >" << name << "<" << endl;
   //cout << "lastname: >" << lastname << "<" << endl;
   //cout << "fullname: >" << fullname << "<" << endl;

   fullname = name + " " + lastname;
 
   cout << "fullname: >" << fullname << "<" << endl;

   return 0;
}