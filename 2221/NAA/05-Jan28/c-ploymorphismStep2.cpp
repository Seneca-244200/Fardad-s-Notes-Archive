
#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

struct Person {   // struct and class are the same
   // member variables, attributes, member data
   char m_name[51];
   int m_age;
   // member functions, methods, behaviour
   void set(const char* name) {
      strCpy(m_name, name);
   }
   void set(int age) {
      m_age = age;
   }

   void display() {
      cout << "name: " << m_name << ", age: " << m_age << endl;
   }
};



int main() {
   Person P;
   char name[51];
   int age;
   cout << "Enter name: ";
   sdds::read(name, 50);
   cout << "Enter age: ";
   cin >> age;


   P.set(name);
   P.set(age);
   P.display();
   return 0;
}
