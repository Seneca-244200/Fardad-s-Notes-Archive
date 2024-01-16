#include <iostream>
using namespace std;
class Base {
public:
    void foo() {
      cout << "Base foo" << endl;
   }
};

class Derived : public Base {
public:
   void foo() {
      cout << "Derive Foo " << endl;
   }
   void func() {
      foo();
      Base::foo();
   }
};


int main() {
   Derived D;
   Derived* p = &D;
   Base* q = &D;
   D.func();
   cout << "------------" << endl;
   p->foo();
   q->foo();
   return 0;
}

