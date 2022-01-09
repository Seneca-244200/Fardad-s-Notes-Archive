#include <iostream>
#include "DynMarks.h"
using namespace std;
using namespace sdds;
int main() {
   double samples[] = { 34,78.5,45,90.5 };
   cout << "Methods, Privacy and DMA" << endl;
   DynMarks oopFinal("OOP Final marks", samples, 4);
//   DynMarks ipcMidterm("IPC144 Midterm"); same a below
   // assignment at the moment of craetion is a call to 
   // the one argument constructor
   DynMarks ipcMidterm = "IPC144 Midterm"; // same as above
   DynMarks theEmptyOne;


   oopFinal.display();
   ipcMidterm.set("IPC test");
   ipcMidterm.display();
   theEmptyOne.display();
   oopFinal.set("OOP244 Final Exam DynMarks").add(88.8).display();
   for (int i = 0; i < 1000; i++) {
      oopFinal.add(43.5 + (i % 50));
   }
   oopFinal.display();
   return 0;
}