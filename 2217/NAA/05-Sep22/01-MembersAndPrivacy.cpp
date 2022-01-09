#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;
class Marks{  // classes are always private by default
//private:  // private member valriables
   char m_title[51];
   double m_values[NOM];
   int m_NoOfValues;
public:
   bool inSafeEmpty()const {
  /*    bool res = false;
      if (m_title[0] == 0) {
         res = true;
      }
      return res;*/
      return (m_title[0] == 0);
   }
   void init() {  // safe empty state
      m_title[0] = 0;
      m_NoOfValues = 0;
   }
   void set(const char* title) {
      strcpy(m_title, title);
      m_NoOfValues = 0;
   }
   void init(const char* title, const double values[], int NoOfValues) {
      strcpy(m_title, title);
      m_NoOfValues = 0;
      for (int i = 0; i < NoOfValues; i++) {
         add(values[i]);
      }
   }
   // Getters or Accessors or Queries
   void display()const{ // this method (member function) can not change its owner
      if (!inSafeEmpty()) {
         cout << "*** " << m_title << " ***" << endl;
         for (int i = 0; i < m_NoOfValues; i++) {
            cout << (i + 1) << ": " << m_values[i] << endl;
            // NoOfValues = 100; will cause error since display is const
         }
      }
      else {
         cout << "This object is not set yet!" << endl;
      }
   }
   // Setters, Modifiers, Mutators
   bool add(double mark) {
      bool res = false;
      if (m_NoOfValues < NOM) {
         m_values[m_NoOfValues] = mark;
         m_NoOfValues++;
         res = true;
      }
      return res;
   }
};


int main() {
   Marks Quiz1;
   Marks W1 ;
  /* display(Quiz1);
   display(W1);*/
   Quiz1.init();
   W1.init();
   Quiz1.display();
   W1.display();
   W1.set("Workshop 1");
   W1.add(66.3);
   W1.display();
   // W1.NoOfValues = 2;
   W1.display();
   cout << "DMA and Methods and Privacy" << endl;
   return 0;
}