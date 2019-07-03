#include <iostream>
class Int {
  int val;
public:
  Int(int v) {
    val = v;
  }
  Int& operator=(int v) {
    val = v;
  }
  operator int() {
    return val;
  }
  operator int*() {
    return &val;
  }
  operator const int*() {
    return &val;
  }
  std::istream& read(std::istream& in) {
    int v;
    bool done = false;
    while (!done) {
      in >> v;
      if (in.fail()) {
        in.ignore(1000, '\n');
        std::cout << "Invalid, retry:";
      }
      else {
        done = true;
        val = v;
      }
    }
    return in;
  }
};
std::istream& operator>>(std::istream& lo, Int& ro) {
  return ro.read(lo);
}
void foo(const int* x) {

}

int main() {
  Int a = 5;
  int i;
  a = 15;
  
  i = a;
  foo(a);
  std::cin >> a;
  return 0;
}