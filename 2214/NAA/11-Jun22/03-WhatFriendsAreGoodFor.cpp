#include <iostream>
#include "Container.h"
// please walk through this with attention.
using namespace sdds;
using namespace std;

class Array; // forward declration

class Element { // Element is owned by the Arayy
   char* m_data;
   int m_size;
   Element(const char* value = nullptr);// constructor is private therefore no one can create instantiate this class
   ~Element();
   friend Array; // this is really an ownership, not friendship
};

class Array{
   Element* elms{};
   int m_size;
public:
   Array(int size) {
      elms = new Element[size];
      m_size = size;
   }
   ~Array() {
      delete[] elms;
   }
   ...
}


int main() {
   int a[10];

   return 0;
}