#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;


struct Person {
   char name[51];
   int age;
   void setName(const char* theName) {
      strCpy(name, theName);
   }
   void setAge(int theAge) {
   //   Person::age = theAge;
      age = theAge;
   }
   void display() {
      cout << "name: " << name << " age: " << age << endl;
   }
};


int main() {
   Person P;
   char name[51];
   int age;
   cout << "Enter name: ";
   //sdds::read(P.name, 50);
   sdds::read(name, 50);   // the need for privacy
   P.setName(name);
   cout << "Enter age: ";
   cin >> age;
   P.setAge(age);
   P.display();
   return 0;
}


