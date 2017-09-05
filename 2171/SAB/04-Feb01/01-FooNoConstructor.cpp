#include <iostream>
using namespace std;
class Foo {
private:
   int m_data;
public:
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
   f.display();
   cout << endl;
   f.data(100);
   cout << f.data() << endl;
   f.display();
   cout << endl;
   return 0;
}