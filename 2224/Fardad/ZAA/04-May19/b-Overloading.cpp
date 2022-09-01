#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;
void line(char fill, int length) {// signature line_char_int
   for (int i = 0; i < length; cout << fill, i++);
   cout << endl;
}
void line(char fill) {  // signature line_char
   line(fill, 79);
}
void line() {  // signature line
   line('=', 79);
}
void line(int length) { // signature line_int
   line('-', length);
}
int main() {
   line('*', 40);
   line('-');
   line();
   line(50);
   return 0;
}