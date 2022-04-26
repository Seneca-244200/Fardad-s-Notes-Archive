#include <iostream>
#include "Student.h"
using namespace sdds;
using namespace std;
void line(char fill, int length) {// signature line_char_int
   for (int i = 0; i < length; cout << fill,i++);
   cout << endl;
}
void line(char fill) {  // signature line_char
   line(fill, 70);
}
void line(int length) {
   line('=', length);
}
void line() {
   line('=', 75);
}
int main() {
   line('*', 40);
   line('-');
   line();
   line(char(40));
   line(40);
   return 0;
}
