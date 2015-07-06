#include <iostream>
#include "template.h"
using namespace std;
class Container{
  int a;
public:
  Container(int v = 0) :a(v){// initializing a
    // a = v;  // setting a
  }
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
  d = add<double>(b, 1.3);

  A = add(B, C);
  cout << a << endl;
  cout << d << endl;
  cout << A << endl;
  A = Max(B, C);
  a = Max(b, c);
  cout << A << endl;
  cout << a << endl;
  cout << Max(name1, name2) << endl;
  A = add<Container>(b, c);// b and c will be casted to Container because 
                           // Container has a constructor that accpets an int
  cout << A << endl;
  return 0;

}