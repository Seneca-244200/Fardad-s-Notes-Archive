#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

class Person {  // struct and class are the same but structs are public by default and classes are private by default
   //private: no need since class is private by default
   char m_name[51];
   int m_age;
   void setSafeEmpty() {   // an invalid recognizable state
      m_age = -1;
      m_name[0] = 0;// make name empty
   }
public:
   void set(const char* name) {
      if (name == nullptr || name[0] == 0 || name[1] == 0 || strLen(name) > 50) {
         setSafeEmpty();
      }
      else {
         strCpy(m_name, name);
      }
   }
   void set(int age) {
      if (age < 1 || age > 120) {
         setSafeEmpty();
      }
      else {
         m_age = age;
      }
   }
   //bool isSafeEmpty() {
   //   bool res = false;
   //   if (m_age < 0 || m_name[0] == 0) {
   //      res = true;
   //   }
   //   return res;
   //}
   
   // these are queries
   bool isSafeEmpty()const {   // consts are a must even if no error is issued.
      return m_age < 0 || m_name[0] == 0;
   }
   bool isValid()const {
      return !isSafeEmpty();
   }
   void display()const {
      if (isValid()) {
         cout << "name: " << m_name << ", age: " << m_age << endl;
      }
      else {
         cout << "invalid Person!" << endl;
      }
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
