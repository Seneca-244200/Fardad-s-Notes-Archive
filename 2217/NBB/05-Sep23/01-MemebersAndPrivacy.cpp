#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;
const int MaxNoMarks = 1000;
class Marks {
//private:
   char m_title[51];   // "EAC150 Finals"
   double m_values[MaxNoMarks];
   int m_noOfValues;
public:
   //Getter, Querie, Accessors  must be constant
   void display()const {
      if (!inSafeEmpty()) {
         cout << "*** " << m_title << " ***" << endl;
         for (int i = 0; i < m_noOfValues; i++) {
            cout << (i + 1) << "- " << m_values[i] << endl;
         }
         //m_noOfValues = 100; cannot do since display is constant
         cout << "**********************************************" << endl;
      }
      else {
         cout << "This object is in an invalid state!" << endl;
      }
   }
   bool inSafeEmpty()const {
      /* 
      bool res = false;
      if (m_title[0] == 0) {
         res = true;
      }
      return res; 
      */
      return (m_title[0] == 0);
   }

   // Setters, Modifiers, Mutators
   // must be called only once after the object is created;
   void init() {
      m_title[0] = 0;
      m_noOfValues = 0;
   }

   void init(const char* title, const double values[], int NoOfValues) {
      set(title);
      for (int i = 0; i < NoOfValues; i++) {
         m_values[i] = values[i];
      }
      m_noOfValues = NoOfValues;
   }
   void set(const char* title) {
      strcpy(m_title, title);
   }
   bool add(double mark) {
      bool res = false;
      if (!inSafeEmpty() && m_noOfValues < MaxNoMarks) {
         m_values[m_noOfValues] = mark;
         m_noOfValues++;
         res = true;
      }
      return res;
   }
};



int main() {
   double samples[] = { 34, 56,99.8,45 };
   cout << "Methods, Privacy and DMA!" << endl;
   Marks finals;
   Marks midterms;
   finals.init("OOP244 Final", samples, 4);
   midterms.init();
   //finals.m_noOfValues = 3;  can not be modified direclty because it is private
   finals.display();
   midterms.display();
   finals.add(99.9);
   finals.display();
   return 0;
}