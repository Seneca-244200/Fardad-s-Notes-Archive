#include <iostream>
using namespace std;
class Foo {
  int _data;
public:
  Foo() {
    _data = 0;
    cout << "Df" << _data << endl;
  }
  Foo(const Foo& f) {
    _data = f._data + 1;
    cout << "Cp" << _data << endl;
  }
  Foo(int data) {
    _data = data;
    cout << "Cn" << _data << endl;
  }
  Foo& operator=(const Foo& f) {
    _data = f._data + 10;
    cout << "As" << _data << endl;
    return *this;
  }
  Foo& operator=(int data) {
    _data = data + 100;
    cout << "Ai" << _data << endl;
    return *this;
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
//  bad one: 
//ostream& operator<<(ostream& os,Foo F) {
ostream& operator<<(ostream& os, const Foo& F) {
  return F.display(os);
}
istream& operator>>(istream& is, Foo& F) {
  return F.read(is);
}

int main(void) {
  Foo f = 100;
  return 0;
}