#include <iostream>
#include "cstring.h"
using namespace sdds;
using namespace std;
struct Person {
   char* name;
   int age;
};

char* dynamicGetName() {
   char* name = nullptr;  // to flag a pointer not being used;
   char tempName[256];
   cout << "Name: ";
   cin.getline(tempName, 256);
   name = new char[strLen(tempName) + 1];
   strCpy(name, tempName);
   return name;
}

void displayPerson(const Person& pref) {
   cout << pref.name << ", " << pref.age << " years old!" << endl;
}

int main() {
   Person P;
   cout << "Enter you name: ";
   P.name = dynamicGetName();
   cout << "Enter you age: ";
   cin >> P.age;
   displayPerson(P);
   delete[] P.name;
   return 0;
}
