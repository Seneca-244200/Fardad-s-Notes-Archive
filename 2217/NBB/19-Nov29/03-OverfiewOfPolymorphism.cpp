/*
Polymorphism   // same action done in a different way base on type of the action owner
   Ad-Hoc        // Fardad's Term: Fake polymorphism 
      Coercion
         int a, b;
         double c, d;
         a = b;  // int -> int
         c = d;  // double -> double
         a = c;  // doube -> int  (casting)    a = int(c);
      Overloading
         void display(int val);           // display_int
         void display(double val);        // display_double
         void display(const char* str);   // display_const_char_*
   Universal  // true polymorphism
      inclusion
          // virtual function
      Parametric
          // tempaltes 


*/


#include <iostream>
using namespace std;

int main() {
   return 0;
}