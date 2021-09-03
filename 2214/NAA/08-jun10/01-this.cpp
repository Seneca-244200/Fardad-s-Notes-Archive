#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Student.h"
#include "utils.h"
using namespace sdds;
using namespace std;


class Container {
   char m_content[41];
   double value;
public:
   Container() {
      m_content[0] = 0;
      value = 0.0;
   }
   Container& set(const char* content, double value) {
 //     strcpy(this->m_content, content);   // bad pratice but good example
      strcpy(m_content, content);
      this->value = value; // bad pratice but good example for this
      return *this;// target of this or the object itself
   }
   void print()const {
      cout << value << " CCs of " << m_content << endl;
   }
};
/*
if * comes a type, it pointer
if * doesn't make sense, that is target of

*/
void PrintContainer(const Container& cnt) {
   cout << "The Container conatains";
   cnt.print();
   // this->whatever... error, because Print container
   // does not belong to an object.
}
/*
"this" is only valid a member function.
*/


int main() {
   Container C;
   Container D;
   C.set("Milk", 250.0).print() ;
   D.set("Water", 300.0).print();
   
   
   // this  will cause error here
   // here "this" does not mean anything since we are not
   // in an object

   return 0;
}