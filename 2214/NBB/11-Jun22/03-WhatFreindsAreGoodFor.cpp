#include <iostream>
#include "Container.h"
using namespace std;
using namespace sdds;

class Array;

class Element { // fully private
   char* m_data;
   int m_size;
   Element(const char* value = nullptr);
   friend Array;// in OOP, friendship should be used to imeplement ownership
};

class Array {
   Element* m_elem;
   int m_size;
public:
   Array(int size) {
      m_elem = new Element[size];
   }
};


int main() {
   Array A(10);
   // Element E("Abc"); will cause an error since element is fully private
   return 0;
}






