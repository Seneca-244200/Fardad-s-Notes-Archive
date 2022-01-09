
#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
// signature of a function is its name and type of its parameters
void line(int len);  // line_int
void line(char fill, int len); // line_char_len
void line();

int main(){
   line('*', 20); // 
   line(40);
   line();
   return 0;

} 

void line() {
   line(70);
}
void line(char fill, int len) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}
void line(int len) {
   line('-', len);
}