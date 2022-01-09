#include <iostream>
#include "Marks.h"
using namespace std;
using namespace sdds;
int main() {
   double samples[] = { 34,78.5,45,90.5 };
   cout << "Methods, Privacy and DMA" << endl;
   //Marks oopFinal = { "OOP244 Final Exam Marks", {45.5,78,45,3,49.6,90,100,77.2}, 8 };
   //Marks ipcMidterm = { "IPC144 Midterm Marks", {45.5,45,49.6,90,100,77.2}, 6 };
   Marks oopFinal;
   Marks ipcMidterm;
   oopFinal.init("OOP Final marks", samples, 4);
   ipcMidterm.init();
   //oopFinal.noOfMarks = 2;  // not accessible since noOfMarks is private.
   oopFinal.display();
   ipcMidterm.display();
   oopFinal.set("OOP244 Final Exam Marks");
   oopFinal.display();
   oopFinal.add(88.8);
   oopFinal.display();
   return 0;
}