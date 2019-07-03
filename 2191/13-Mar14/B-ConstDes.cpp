#include <iostream>
using namespace std;
class Foo {
  int _data;
public:
  Foo() {
    _data = 0;
    cout << "Df" << _data <<  endl;
  }
  Foo(const Foo& f) {
    _data = f._data;
    cout << "Cp" << _data << endl;
  }
  Foo(int data) {
    _data = data;
    cout << "Cn" << _data << endl;
  }
  ~Foo() {
    cout << "~Ds" << _data << endl;
  }
};

int main(void) {
  Foo f;
  Foo g(1);
  Foo h = Foo(2);
  Foo i = 3;
  int a(4);
  cout << a << endl;
  return 0;
}