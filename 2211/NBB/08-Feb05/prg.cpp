#include <iostream>
#include "Name.h"
using namespace sdds;
using namespace std;

void foo() {
//   Name N[4] = { {"James Bilik",5}, "Shiv Sharma", "Taner Sarper" }; // Potatos
   Name N[4] = { Name("James Bilik", 5), Name("Shiv Sharma"), Name("Taner Sarper") }; // Potaatos
   int i(0);
   for (i = 0; i < 4; i++) N[i].print() << endl;
}

int main() {
   Name A("Fernanda Goncalves Rios", 18);
 //  Name N("Fardad");
   Name N = "Fardad"; // same as above
   // assignment at the moment of creation is a call 
   // to the one argument constructor
   Name M = "Navpreet Singh"; 
   cout << "Before foo" << endl;
   foo();
   cout << "After foo" << endl;
   A.print() << endl;
   N.print() << endl;
   M.print() << endl;

 


   return 0;
}