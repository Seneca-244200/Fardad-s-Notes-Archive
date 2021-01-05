#include <iostream>
using namespace std;
#include "Output.h"
int main() {

   char name[51];
   sdds::fout<<"My name is Jack and I am "<<"45"<<" years old\n";
   sdds::fout << "What is your name?";
   cin >> name;
   sdds::fout << "Hello " << name << " how are you?\n";
   return 0;
}