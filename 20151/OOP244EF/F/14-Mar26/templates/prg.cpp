#include <iostream>
#include "template.h"
using namespace std;

class Container{
  int a;
public:
  Container(int v=0) :a(v){}
  Container operator+(const Container& C)const{
    Container R(a + C.a);
    return R;
  }
  bool operator>(const Container& C)const{
    return a > C.a;
  }
  ostream& display(ostream& ostr)const{
    return ostr << a;
  }
};
ostream& operator<<(ostream& ostr, const Container& C){
  return C.display(ostr);
}
int main(){
  char name1[] = "Fardad",
    name2[] = "Fardood";
  Container A, B = 100, C = 200;
  double d;
  int a, b = 10, c = 20;
  a = add(b, c);
  d = add<double>(b, c);

  A = add(B, C);
  cout << a << endl;
  cout << A << endl;
  A = Max(B, C);
  cout << A << " is the greater of the two!" << endl;
  cout << Max(name1, name1) << " comes first in dictionary" << endl;
}