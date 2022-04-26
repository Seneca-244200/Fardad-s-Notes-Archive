#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;


class Person {
   // all private by default
   char m_name[51];
   int m_age;
public:
   void setName(const char* theName) {
      strCpy(m_name, theName);
   }
   void setAge(int theAge) {
      //   Person::age = theAge;
      m_age = theAge;
   }
   void display()const{
      cout << "name: " << m_name << " age: " << m_age << endl;
      //strCpy(m_name, "whatever I like!"); can not change its owner since it is a constant method
   }
   bool read() {


      bool res = true;
      char name[51];
      int age = 0;
      cout << "Enter name: ";
      cin.getline(name, 50);
      if (name[2] == 0) {
         res = false;
      }
      if (res) {
         setName(name);
         cout << "Enter age: ";
         cin >> age;
         if (age < 1 || age > 120) {
            res = false;
         }
         else {
            setAge(age);
         }
      }
      return res;
   }
};


void displayPerson(const Person& P) {
   cout << "Here comes:" << endl;
   P.display();
}

int main() {
   Person P;
   if (P.read()) {
      displayPerson(P);
   }
   else {
      cout << "bad data!" << endl;
   }
   return 0;
}


