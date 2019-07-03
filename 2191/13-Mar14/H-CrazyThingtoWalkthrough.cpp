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
  istream& read(istream& is = cin) {
    return cin >> _data;
  }
};

Foo getFoo(Foo temp) {
  cout << "Enter value for Foo: ";
  temp.read();
  return temp;
}

int main(void) {
  Foo f;
 getFoo(f).display() << endl;
  return 0;
}