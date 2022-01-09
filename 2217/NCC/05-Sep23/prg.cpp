#include <iostream>
#include "DynMarks.h"
using namespace std;
using namespace sdds;
int main() {
   double samples[] = { 34,78.5,45,90.5 };
   cout << "Methods, Privacy and DMA" << endl;
   //DynMarks oopFinal = { "OOP244 Final Exam DynMarks", {45.5,78,45,3,49.6,90,100,77.2}, 8 };
   //DynMarks ipcMidterm = { "IPC144 Midterm DynMarks", {45.5,45,49.6,90,100,77.2}, 6 };
   DynMarks oopFinal;
   DynMarks ipcMidterm;
   oopFinal.init("OOP Final marks", samples, 4);
   ipcMidterm.init();
   //oopFinal.noOfMarks = 2;  // not accessible since noOfMarks is private.
   oopFinal.display();
   ipcMidterm.display();
   oopFinal.set("OOP244 Final Exam DynMarks");
   oopFinal.display();
   oopFinal.add(88.8);
   oopFinal.display();
   for (int i = 0; i < 1000; i++) {
      oopFinal.add(43.5 + (i % 50));
   }
   oopFinal.display();
   oopFinal.cleanUp();
   ipcMidterm.cleanUp();
   return 0;
}