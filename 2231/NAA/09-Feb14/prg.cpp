#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;

int main() {
   String name, N;
   ofstream myname("thename.txt");
   cout << "Please enter your name: ";
   cin >> name;
   myname << name << endl;
   myname.close();
   ifstream file("thename.txt");
   file >> N;
   if (file) {
      cout << "the name in file is: " << N << endl;
   }
   return 0;
}