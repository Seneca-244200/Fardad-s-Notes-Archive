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
    _data = f._data+1;
    cout << "Cp" << _data << endl;
  }
  Foo(int data) {
    _data = data;
    cout << "Cn" << _data << endl;
  }
  ~Foo() {
    cout << "~Ds" << _data << endl;
  }
  ostream& display(ostream& os = cout)const {
    os << "Dis" << _data;
  }
};
void showFoo(Foo F) {
  F.display() << endl;
}


int main(void) {
  Foo f;
  f = 100;
  cout << "Last line of program!" << endl;
  return 0;
}