#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "DynMarks.h"
using namespace std;
using namespace sdds;
int main() {
   double samples[] = { 34, 56,99.8,45 };
   cout << "Methods, Privacy and DMA!" << endl;
   DynMarks emptyList; // call to no-argument constructor or a default constructor
   DynMarks finals("OOP244 Final", samples, 4);
   //DynMarks midterms("OOP244 Midterm");
   DynMarks midterms = "OOP244 Midterm";  // same as the above
                                          // assignment at the moment of construction is a call to a one argument constructor
   emptyList.display();
   finals.display();
   midterms.display();
   finals.add(99.9).set("OOP Final").display();
   midterms.set("OOP Midterm");
   for (int i = 0; i < 50; i++) {
      midterms.add(34.5 + i);
   }
   midterms.display();
   return 0;
}