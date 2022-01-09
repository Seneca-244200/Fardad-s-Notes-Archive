class Foo {
   int whatever;
   char* whateverChar;
public:
   Foo();
   Foo(const Foo& F) = delete;
   Foo& operator=(const Foo& F) = delete;
};

int main() {
   Foo A;
   Foo C;
   Foo B = A;
   A = C;
   return 0;
}


