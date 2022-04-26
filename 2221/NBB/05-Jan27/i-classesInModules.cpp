#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;

// this will be in Person.h
class Person {
   // all private by default
   char m_name[51];
   int m_age;
   void setEmpty();
public:
   bool isEmpty()const;
   void setName(const char* theName);
   void setAge(int theAge);
   void ages();
   void display()const;
   void read();
};

// these are in main.cpp
void displayPerson(const Person& P) {
   cout << "Here comes:" << endl;
   P.display();
}

int main() {
   Person P;
   P.read();
   displayPerson(P);
   P.ages();
   displayPerson(P);
   return 0;
}


// all these will be in Person.cpp
void Person::setEmpty() {  // empty state is different in each class based on your design
   m_name[0] = 0; // empties the name
   m_age = -1; // make age invalid
}
bool Person::isEmpty()const {
   return m_age < 0 || m_name[0] == 0;
}
void Person::setName(const char* theName) {
   if (theName[1] == 0 || strLen(theName) > 50) {
      setEmpty();
   }
   else {
      strCpy(m_name, theName);
   }
}
void Person::setAge(int theAge) {
   if (theAge < 0 || theAge > 120) {
      setEmpty();
   }
   else {
      m_age = theAge;
   }
}
void Person::ages() {
   m_age++;
}
void Person::display()const {
   if (!isEmpty()) {
      cout << "name: " << m_name << " age: " << m_age << endl;
   }
   else {
      cout << "Invalid Name!" << endl;
   }
}
void Person::read() {
   char name[51];
   int age = 0;
   cout << "Enter name: ";
   cin.getline(name, 50);
   setName(name);
   cout << "Enter age: ";
   cin >> age;
   setAge(age);
}
