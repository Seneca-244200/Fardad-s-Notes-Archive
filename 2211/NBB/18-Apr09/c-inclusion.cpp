#include <iostream>
using namespace std;
class base {
public:
   virtual void foo() {
      cout << "Base::foo()" << endl;
   }
};
class derived : public base {
public:
   virtual void foo() {
      cout << "Derived::foo()" << endl;
   }
};
int main() {
   derived d;
   base& b = d;
   base rb;

   rb.foo();
   b.foo(); // Universal/Inclusion

   return 0;
}