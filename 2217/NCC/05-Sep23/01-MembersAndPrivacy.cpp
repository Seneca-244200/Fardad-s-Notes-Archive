#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;
const int MaxNoOfValues = 1000;
class Marks {
//private:
   char m_title[51];
   double m_values[MaxNoOfValues];
   int m_noOfValues;
public:
   // Getters, Accessors of Queries  (%99 of the time should be constant)
   void display()const{    
      if (!inSafeEmpty()) {
         cout << endl << ">>>  " << m_title << "  <<<" << endl;
         for (int i = 0; i < m_noOfValues; i++) {
            cout << (i + 1) << "> " << m_values[i] << endl;
         }
         //noOfMarks++;   can not change the owner since it is a const method (member function)
         cout << ">>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<" << endl;
      }
      else {
         cout << "This object is in an invalid state!" << endl;
      }
   }
   bool inSafeEmpty()const {
      bool res = false;
      if (m_title[0] == 0) {
         res = true;
      }
      return res;
   }

   //Setters, Modifiers or Mutators
   // this function is supposed to be called only once after creation of the object
   void init(const char* title, const double values[], int noOfMarks) {
      strcpy(m_title, title);
      for (int i = 0; i < noOfMarks; i++) {
         m_values[i] = values[i];
      }
      m_noOfValues = noOfMarks;
   }
   void init() {
      m_title[0] = 0;// makes the title an empty Cstring
      m_noOfValues = 0;
   }
   void set(const char* title) {
      strcpy(m_title, title);
   }
   bool add(double mark) {
      bool res = false;
      if (m_noOfValues < MaxNoOfValues) {
         m_values[m_noOfValues] = mark;
         m_noOfValues++;
         res = true;
      }
      return res;
   }
};



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