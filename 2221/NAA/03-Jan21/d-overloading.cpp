#include <iostream>
using namespace std;
void line(char fill, int length) { // line_char_int
   for (int i = 0; i < length; cout << fill, i++);
   cout << endl;
}
void line(char fill) {   // line_char
   line(fill, 75);
}
void line() {           // line
   line('-');  // calling line_char
}
void line(int length) {  // line_int
   line('-', length);
}

int main() {
   line('^', 45);   // line_char_int
   line('*');       // line_char
   line();          // line 
   line(50);        // line_int
   return 0;
}