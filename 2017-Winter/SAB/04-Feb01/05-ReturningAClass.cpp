#include <iostream>
using namespace std;
class Foo {
private:
   int m_data;
public:
   ~Foo() {
//      cout << "Foo with " << data() << " is dead!" << endl;
   }
   Foo() {
//      m_data = 0;
      data(0);
//      cout << "Defaulting Foo!" << endl;
   }
   Foo(int value) {
      data(value);
 //     cout << "Creating Foo with " << data() << endl;
   }
   Foo(int value, int coof) {
      data(value*coof);
//      cout << "Creating Foo with " << value << " and " << coof << " multiplied!" << endl;
   }
   void data(int value) {
      m_data = value;
   }
   int data()const {
      return m_data;
   }
   ostream& display()const {
      cout << data();
      return cout;
   }
};
int main() {
   Foo f;
   Foo g(100);
   Foo h = 200;
   Foo i(100, 3);
   int a(10);
   f.display() << endl;
   g.display() << endl;
   h.display() << endl;
   i.display() << endl;
   cout << a << endl;
   return 0;
}