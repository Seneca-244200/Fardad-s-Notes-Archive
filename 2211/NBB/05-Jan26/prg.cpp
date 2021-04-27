#include <iostream>
#include "cstring.h"
using namespace std;
using namespace sdds;

struct Person {
   char* name;
   int age;
};
void displayPerson(const Person& pref) {
   cout << pref.name << ", " << pref.age << endl;
}
char* DynGetName() {
   char* name = nullptr;
   char tempname[256];
   cin.getline(tempname, 256);
   name = new char[strLen(tempname) + 1];
   strCpy(name, tempname);
   return name;
}
int main() {
   Person P;
   cout << "Enter you name: ";
   P.name = DynGetName();
   cout << "Enter you age: ";
   cin >> P.age;
   displayPerson(P);
   delete[] P.name;
   return 0;
}