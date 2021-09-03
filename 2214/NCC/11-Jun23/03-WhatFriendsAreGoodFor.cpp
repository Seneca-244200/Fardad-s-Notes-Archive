#include <iostream>
using namespace std;

class Array;

class Element {
   char* m_data;
   int m_size;
   Element(const char* value = nullptr);
   friend Array;  // ownership of Array towards Element
};

class Array {
   Element* m_elems;
   int m_size;
public:
   Array(int size) {
      m_elems = new Element[m_size = size];
   }
};


int main() {
   Array words(10);
   //Element E("hello"); // wrong


   return 0;
}