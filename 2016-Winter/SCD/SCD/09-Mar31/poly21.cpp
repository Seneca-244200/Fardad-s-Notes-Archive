#include <iostream>
using namespace std;
class Container{
  int value_;
public:
  Container(int value = 0){
    value_ = value;
  }
  int value()const{
    return value_;
  }
  void value(int thevalue){
    value_ = thevalue;
  }
  operator int()const{
    return value_
  }
};

ostream& operator<<(ostream& ostr, const Container& C){
  return ostr << "C.value: " <<  C.value();
}

int add(int x, int y){
  return x + y;
}

double add(double x, double y){
  return x + y;
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
  g = add(e, f);
  cout << g << endl;
  k = add(i ,j);
  cout << k << endl;


  return 0;
}