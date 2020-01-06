#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
#include "utils.h"
using namespace sdds;
struct Name {
   char* first;
   char* last;
};

void read(Name& N) {
   char name[201];
   cout << "First name: ";
   read(name, 20, "This first name is too long, please shorten it and reenter: ");
   N.first = new char[strlen(name) + 1];
   strcpy(N.first, name);
   cout << "Last name: ";
   read(name, 40, "This last name is too long, please shorten it and reenter: ");
   N.last = new char[strlen(name) + 1];
   strcpy(N.last, name);
}
void display(const Name& N) {
   cout << N.first << " " << N.last;
}
void deallocate(Name& N) {
   delete[] N.first;
   delete[] N.last;
}

int main() {
   Name* a;
   int num;
   int i;
   cout << "how many names? " << endl;
   read(num, 2, 10, "Invalid number of names, 2<=ENTRY<=10: ");
   a = new Name[num];
   for (i = 0; i < num; i++) {
      cout << (i + 1) << " _________________ " << endl;;
      read(a[i]);
   }
   for (i = num - 1; i >= 0; i--) {
      cout << (i + 1) << " ________________" << endl;
      display(a[i]);
   }
   for (i = 0; i < num; i++) {
      deallocate(a[i]);
   }
   delete[] a;
   return 0;
}