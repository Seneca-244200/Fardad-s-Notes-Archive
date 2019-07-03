#include <iostream>
using namespace std;
class Foo {
  int _data;
public:
  Foo() {
    _data = 0;
    cout << "Df" << _data <<  endl;
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
  Foo h[4] = { 2, 3, 4.254 , Foo(5)};

  return 0;
}