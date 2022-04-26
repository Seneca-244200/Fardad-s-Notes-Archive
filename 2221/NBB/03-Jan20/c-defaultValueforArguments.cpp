#include <iostream>
#include "Student.h"
using namespace sdds;
using namespace std;
// default argument values are always put in their
// prototype
void line(char fill = '=', int length = 70);
void printName(const char* name = nullptr);
int main() {
   line('*', 40);
   line('-');
   line();
   printName("John");
   printName();
   return 0;
}
void line(char fill, int length) {// signature line_char_int
   for (int i = 0; i < length; cout << fill, i++);
   cout << endl;
}
void printName(const char* name) {
   if (name) {
      cout << name << endl;
   }
   else {
      cout << "No Name" << endl;
   }
}
