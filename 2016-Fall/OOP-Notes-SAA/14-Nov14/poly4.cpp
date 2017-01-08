#include <iostream>
using namespace std;
class Container{
  int value_;
public:
  Container(int value = 0){
    value_ = value;
  }
  Container(const Container& C) = delete;
  int value()const{
    return value_;
  }
  void value(int thevalue){
    value_ = thevalue;
  }
  Container& operator+=(const Container& C){
    value_ += C.value_;
    return *this;
  }
};

ostream& operator<<(ostream& ostr, const Container& C){
  return ostr << "C.value: " <<  C.value();
}

template <typename heehaw>
heehaw& add( heehaw& x,  heehaw& y){
  return x += y;
}




int main(){
  int
    a = 10,b = 20,c;
  double
    e = 2.2, f = 3.3,g;
  Container
    i = 20, j = 30, k;
  c = add(a, b);
  cout << c << endl;
  cout << a << endl;
  g = add(e, f);
  cout << g << endl;
  cout << e << endl;
  k = add(i ,j);
  cout << k << endl;
  cout << i << endl;

  return 0;
}