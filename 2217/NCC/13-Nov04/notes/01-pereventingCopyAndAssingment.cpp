#include <iostream>
class Foo {
public:
   int data;
   public;
   Foo();
   Foo(const Foo& F) = delete;
   void operator=(const Foo& F) = delete;
   ~Foo();
   operator bool() {
      return data > 0;
   }
};
void showFoo(Foo F) {
   // whatever
}
int main() {
   Foo A;
   Foo B;
   B = A;
   showFoo(A);
   if (A) {

   }
   return 0;
}