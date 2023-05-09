#include <iostream>
#include <fstream>
#include "String.h"
using namespace std;
using namespace sdds;
class Correction {
   int& m_data;
public:
   Correction(int& data):m_data(data) { 
   }
   void max(int value) {
      if(m_data > value) m_data = value;
   }
   void min(int value) {
      if(m_data < value) m_data = value;
   }

};


int main() {
   int V = 40;
   Correction Cr(V);
   cout << "Enter a number: ";
   Cr.max(30);
   cout << V << endl; // I want 30 to get printed
   return 0;
}