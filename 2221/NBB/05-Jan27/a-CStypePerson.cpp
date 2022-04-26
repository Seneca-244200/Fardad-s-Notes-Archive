#include <iostream>
#include "Utils.h"
using namespace std;
using namespace sdds;


struct Person {
   char name[51];
   int age;
};

void SetPersonName(Person* pptr, const char* name) {
   strCpy(pptr->name, name);
}
void SetPersonAge(Person* pptr, int age) {
   pptr->age = age;
}

void DisplayPerson(const Person* pptr) {
   cout << "name: " << pptr->name << " age: " << pptr->age << endl;
}

int main() {
   Person P;
   char name[51];
   int age;
   cout << "Enter name: ";
   //sdds::read(P.name, 50);
   sdds::read(name, 50);   // the need for privacy
   SetPersonName(&P, name);
   cout << "Enter age: ";
   cin >> age;
   SetPersonAge(&P, age);
   DisplayPerson(&P);
   return 0;
}


