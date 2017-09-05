#include <iostream>
using namespace std;
class Foo {
private:
   int m_data;
public:
   ~Foo() {
      cout << "Foo with " << data() << " is dead!" << endl;
   }
   Foo() {
//      m_data = 0;
      data(0);
   }
   Foo(int value) {
      data(value);
   }
   Foo(int value, int coof) {
      data(value*coof);
   }
   void data(int value) {
      m_data = value;
   }
   int data()const {
      return m_data;
   }
   void display()const {
      cout << data();
   }
};
int main() {
   Foo f;
   Foo g(100);
   Foo h = 200;
   Foo i(100, 3);
   int a(10);
   f.display();
   cout << endl;
   g.display();
   cout << endl;
   h.display();
   cout << endl;
   i.display();
   cout << endl;
   cout << a << endl;
   return 0;
}