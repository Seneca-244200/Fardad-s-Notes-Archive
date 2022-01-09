/*
Polymorphism  doing the same action in different ways
   Ad-Hoc   // Fardad's term: fake polymophism
      Coercion  (casting)
         int a , b;
         doubl c, d;
         a = b;  // int -> int
         c = d;  // double -> double
         a = c;  // double -> int  // what happens here?   
         void foo(double a);
         call: foo(10);  (casting)
      Overloading
         void display(int a);             // behind the scene: display_int
         void display(double a);          // behind the scene: display_double
         call display(23.4); ( automatically the second one is chosen).  display_double
   Universal
      inclusion
         // virtual actions
      parametric
         // templates
*/


#include <iostream>
using namespace std;
// this code won't compile
int main() {

   return 0;
}