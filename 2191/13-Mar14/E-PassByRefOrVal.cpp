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
    return os << "Dis" << _data;
  }
};
void badShowFoo(Foo F) {
  F.display() << endl;
}
void showFoo(const Foo& F) {
  F.display() << endl;
}
int main(void) {
  Foo f;
  cout << "good show: " << endl;
  showFoo(f);
  cout << "bad show: " << endl;
  badShowFoo(f);
  cout << "Last line of program!" << endl;
  return 0;
}