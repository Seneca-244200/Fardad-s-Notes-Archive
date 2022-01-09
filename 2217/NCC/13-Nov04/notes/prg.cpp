#include <iostream>
class Foo {
public:
   Foo();
   Foo(const Foo& F) = delete;
   void operator=(const Foo& F) = delete;
   ~Foo();
};
void showFoo(Foo F) {
   // whatever
}
int main() {
   Foo A;
   Foo B;
  /* B = A;
   showFoo(A);*/
   return 0;
}