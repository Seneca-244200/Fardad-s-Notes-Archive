struct Foo {
   /*Foo() {
      a = 0;
   }*/
   Foo(int v = 0) {
      a = v;
   }
   int a;
};

int main() {
   Foo F;
   F.a = 23;
   return 0;
}