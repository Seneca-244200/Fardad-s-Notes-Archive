#include <iostream>
#include "Employee.h"
using namespace std;
using namespace sdds;
void line(char fill, int len); // lineCharInt
void line(int len);   // lineInt
void line();

int main() {
   line('*', 20); // 
   line(40);
   line();
   return 0;
} 

void line(char fill, int len) {
   for (int i = 0; i < len; i++, cout << fill);
   cout << endl;
}
void line(int len) {
   line('-', len);
}
void line() {
   line(70);
}