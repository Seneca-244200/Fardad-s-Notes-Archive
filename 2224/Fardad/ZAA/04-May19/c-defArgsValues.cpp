#include <iostream>
#include "Employee.h"
using namespace sdds;
using namespace std;
// default argument values instead of overloading if the logic
// is identical and there is no need for new logic.
void line(char fill='=', int length = 79);
void line(int length);

int main() {
   line('*', 40);
   line('-');
   line();
   line(50);
   return 0;
}

void line(char fill, int length) {// signature line_char_int
   for (int i = 0; i < length; cout << fill, i++);
   cout << endl;
}
void line(int length) {
   line('-', length);
}